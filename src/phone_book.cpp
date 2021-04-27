#include "phone_book.h"

#include <sstream>
#include <iostream>
#include <algorithm>

PhoneBook::PhoneBook(std::ifstream& ifs)
{
    std::string line;

    while (std::getline(ifs, line))
    {
        std::istringstream iss(line);

        std::string tmp;

        Person person;
        iss >> person.m_last_name >> person.m_first_name >> tmp;

        if (not tmp.empty() && isalpha(tmp[0]))
        {
            person.m_patronymic.emplace(std::move(tmp));
        }

        PhoneNumber phone_number;

        iss >> phone_number.m_contry_code >> phone_number.m_settlement_code
            >> phone_number.m_number >> tmp;

        if (not tmp.empty() && isalnum(tmp[0]))
        {
            phone_number.m_additional_number.emplace(stoi(tmp));
        }

        if (iss.fail())
        {
            std::cerr << "something is wrong" << std::endl;
        }

        m_data.emplace_back(std::move(person), std::move(phone_number));
    }
}

void PhoneBook::SortByName()
{
    std::sort(m_data.begin(), m_data.end(), [](const auto& left, const auto& right){ return left.first < right.first; });
}

void PhoneBook::SortByPhone()
{
    std::sort(m_data.begin(), m_data.end(), [](const auto& left, const auto& right){ return left.second < right.second; });
}

std::tuple<std::string, PhoneNumber> PhoneBook::GetPhoneNumber(const std::string& last_name) const
{
    size_t count = 0;
    PhoneNumber phone_number;
    std::for_each(m_data.cbegin()
                  , m_data.cend()
                  , [&last_name, &count, &phone_number](const auto& data)
                  {
                      if (data.first.m_last_name == last_name)
                      {
                          ++count;
                          phone_number = data.second;
                      }
                  });
    return {count > 0 ? (count == 1 ? "" : "found more than 1")
                      : "not found"
           , std::move(phone_number)};
}

void PhoneBook::ChangePhoneNumber(const Person& person, const PhoneNumber& number)
{
    auto it_find = std::find_if(m_data.begin()
                               , m_data.end()
                               , [&person](const auto& data)
                               {
                                    return data.first == person;
                               });
    if (it_find != m_data.end() && not (it_find->second == number))
    {
        it_find->second = number;
    }
}

std::ostream& operator<<(std::ostream& os, const PhoneBook& phone_number)
{
    for (const auto& [person, phone] : phone_number.m_data)
    {
        os << person <<"\t" << phone << std::endl;
    }

    return os;
}
