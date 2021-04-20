#pragma once

#include <optional>
#include <string>
#include <ostream>
#include <tuple>

struct PhoneNumber
{
    bool operator<(const PhoneNumber& other) const
    {
        return std::tie(m_contry_code
                       , m_settlement_code
                       , m_number
                       , m_additional_number)
               <
               std::tie(other.m_contry_code
                       , other.m_settlement_code
                       , other.m_number
                       , other.m_additional_number);
    }
    uint16_t m_contry_code;
    uint32_t m_settlement_code;
    std::string m_number;
    std::optional<uint32_t> m_additional_number;
};

inline std::ostream& operator<<(std::ostream& os, const PhoneNumber& phone_number)
{
    os << "+" << phone_number.m_contry_code << "(" << phone_number.m_settlement_code << ")" << phone_number.m_number;
    if (phone_number.m_additional_number)
    {
        os << " " << *phone_number.m_additional_number;
    }

    //os << std::endl;

    return os;
}
