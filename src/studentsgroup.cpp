#include <studentsgroup.h>

#include <fstream>
#include <sstream>


void StudentsGroup::addStudent
(
    const Person& person,
    std::vector<double> grades
)
{
    auto student_proto = m_group.add_students();

    proto_students::FullName* full_name = new proto_students::FullName;

    student_proto->clear_name();

    full_name->set_first_name(person.m_first_name);
    full_name->set_second_name(person.m_last_name);

    if (person.m_patronymic)
    {
        full_name->set_patronymic(*person.m_patronymic);
    }
    else
    {
        full_name->set_patronymic("");
    }

    student_proto->set_allocated_name(full_name);

    double sum = 0;
    for (double grade : grades)
    {
        sum += grade;
        student_proto->add_grade(grade);
    }

    student_proto->set_average_grade(sum / grades.size());
}

void StudentsGroup::Open()
{
    std::ifstream is("/home/alina/projects/CXX_difficult_moments/src/students.bin", std::ios_base::binary);
    m_group.ParseFromIstream(&is);
}

void StudentsGroup::Save()
{
    std::ofstream out("/home/alina/projects/CXX_difficult_moments/src/students.bin", std::ios_base::binary);
    m_group.SerializeToOstream(&out);
}

std::optional<double> StudentsGroup::GetAverageScore(const Person& person) const
{
    auto it_student = std::find_if(m_group.students().cbegin()
                      , m_group.students().cend()
                      , [&person](const proto_students::Student& student)
                      {
                            return student.name().first_name() == person.m_first_name
                                   && student.name().second_name() == person.m_last_name
                                   && student.name().has_patronymic() == person.m_patronymic.has_value()
                                   && student.name().patronymic() == person.m_patronymic;
                      });


    return it_student != m_group.students().end() ? std::optional(it_student->average_grade())
                                                  : std::nullopt;
}

std::string StudentsGroup::GetAllInfo(const Person& person) const
{
    std::stringstream str;

    auto it_student = std::find_if(m_group.students().cbegin()
                      , m_group.students().cend()
                      , [&person](const proto_students::Student& student)
                      {
                            return student.name().first_name() == person.m_first_name
                                   && student.name().second_name() == person.m_last_name
                                   && student.name().has_patronymic() == person.m_patronymic.has_value()
                                   && student.name().patronymic() == person.m_patronymic;
                      });


    str << it_student->name().first_name() << " "
        << it_student->name().second_name() << " "
        << (it_student->name().has_patronymic() ? it_student->name().patronymic() : "") << " ";

    if (it_student->grade_size() != 0)
    {
        str << "grades: ";
        for (int i = 0; i < it_student->grade_size(); ++i)
        {
            str << it_student->grade(i) << " ";
        }

        str << "average: " << it_student->average_grade();
    }

    return str.str();
}

std::string StudentsGroup::GetAllInfo() const
{
    std::string str;

    for (int i = 0; i < m_group.students_size(); ++i)
    {
        str += GetAllInfo({m_group.students(i).name().first_name()
                          , m_group.students(i).name().second_name()
                          , m_group.students(i).name().has_patronymic() ? std::optional(m_group.students(i).name().patronymic()) : std::nullopt});
        if (i != m_group.students_size() - 1) str += '\n';
    }

    return str;
}
