#pragma once

#include <optional>
#include <tuple>
#include <ostream>
#include <iomanip>

const size_t FILD_WIDTH     = 15;

struct Person
{
    bool operator==(const Person& other) const
    {
        return std::tie(m_last_name, m_first_name, m_patronymic) ==
               std::tie(other.m_last_name, other.m_first_name, other.m_patronymic);
    }

    bool operator<(const Person& other) const
    {
        return std::tie(m_last_name, m_first_name, m_patronymic) <
               std::tie(other.m_last_name, other.m_first_name, other.m_patronymic);
    }

    std::string m_first_name;
    std::string m_last_name;
    std::optional<std::string> m_patronymic;
};

inline std::ostream& operator<<(std::ostream& os, const Person& person)
{
    os << std::left << std::setw(FILD_WIDTH) <<person.m_last_name << " " << std::left << std::setw(FILD_WIDTH) << person.m_first_name
    << " " << std::left << std::setw(FILD_WIDTH) << (person.m_patronymic ? *person.m_patronymic : "");

    //os << std::endl;

    return os;
}
