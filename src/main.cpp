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
    //auto print_phone_number = // лямбда функция, которая принимает фамилию и выводит номер телефона этого человека, либо строку с ошибкой

    // вызовы лямбды
//    print_phone_number("Ivanov");
//    print_phone_number("Petrov");

//    std::cout << "----ChangePhoneNumber----" << endl;
//    book.ChangePhoneNumber(Person{ "Kotov", "Vasilii", "Eliseevich" },                	PhoneNumber{7, 123, "15344458", nullopt});
//    book.ChangePhoneNumber(Person{ "Mironova", "Margarita", "Vladimirovna" }, PhoneNumber{ 16, 465, "9155448", 13 });
    std::cout << book;
    return 0;
}
