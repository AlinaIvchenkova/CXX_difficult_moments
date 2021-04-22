#pragma once

#include "person.h"
#include "phone_number.h"

#include <fstream>
#include <vector>

class PhoneBook
{
public:
    PhoneBook(std::ifstream& ifs);
    void SortByName();
    void SortByPhone();
    std::tuple<std::string, PhoneNumber> GetPhoneNumber(const std::string& last_name) const;
    void ChangePhoneNumber(const Person& person, const PhoneNumber& number);

    friend std::ostream& operator<<(std::ostream& os, const PhoneBook& phone_number);

private:
    std::vector<std::pair<Person, PhoneNumber>> m_data;

};

std::ostream& operator<<(std::ostream& os, const PhoneBook& phone_number);

