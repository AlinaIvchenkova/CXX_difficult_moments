#include "phone_book.h"

#include <iostream>

int main()
{    
    std::ifstream file("/home/alina/projects/CXX_difficult_moments/src/PhoneBook.txt"); // путь к файлу PhoneBook.txt
    PhoneBook book(file);
    std::cout << book;

    std::cout << "------SortByPhone-------" << std::endl;
    book.SortByPhone();
    std::cout << book;

    std::cout << "------SortByName--------" << std::endl;
    book.SortByName();
    std::cout << book;

    std::cout << "-----GetPhoneNumber-----" << std::endl;
    auto print_phone_number = [&book](const std::string& last_name)
    {
        auto phone_number = book.GetPhoneNumber(last_name);
        const std::string& error = std::get<std::string>(phone_number);

        std::cout << std::left << std::setw(FILD_WIDTH) << last_name << " ";

        if (error.empty())
        {
            std::cout << std::get<PhoneNumber>(phone_number);
        }
        else
        {
            std::cout << error;
        }
        std::cout << std::endl;
    };// лямбда функция, которая принимает фамилию и выводит номер телефона этого человека, либо строку с ошибкой

    // вызовы лямбды
    print_phone_number("Ivanov");
    print_phone_number("Petrov");

    std::cout << "----ChangePhoneNumber----" << std::endl;
    book.ChangePhoneNumber(Person{ "Vasilii", "Kotov", "Eliseevich" }, PhoneNumber{7, 123, "15344458", std::nullopt});
    book.ChangePhoneNumber(Person{ "Margarita", "Mironova", "Vladimirovna" }, PhoneNumber{ 16, 465, "9155448", 13 });
    std::cout << book;
    return 0;
}
