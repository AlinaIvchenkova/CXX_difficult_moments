#include "studentsgroup.pb.h"
#include "person.h"

class IRepository
{
    virtual void Open() = 0; // бинарная десериализация в файл
    virtual void Save() = 0; // бинарная сериализация в файл
};

class IMethods
{
    virtual std::optional<double> GetAverageScore(const Person& person) const = 0;
    virtual std::string GetAllInfo(const Person& person) const = 0;
    virtual std::string GetAllInfo() const = 0;
};

class StudentsGroup : public IRepository, public IMethods
{
public:
    void addStudent(const Person& person, std::vector<double> grades);

    void Open() override;
    void Save() override;

    std::optional<double> GetAverageScore(const Person& person) const override;
    std::string GetAllInfo(const Person& person) const override;
    std::string GetAllInfo() const override;

private:
    proto_students::StudentsGroup m_group;
};
