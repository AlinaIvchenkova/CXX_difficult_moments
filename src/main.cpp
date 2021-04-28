#include "phone_book.h"

#include <iostream>
#include <vector>
#include <algorithm>

namespace
{

template <typename T>
void Swap( T* const rh,  T* const lh)
{
    if (rh == nullptr || lh == nullptr)
    {
        return;
    }

    const T tmp = std::move(*rh);
    *rh = std::move(*lh);
    *lh = std::move(tmp);
}

template <typename T>
void SortPointers(std::vector<T*>& data)
{
    std::sort(data.begin(), data.end(), [](const auto& rh, const auto& lh)
                                          {
                                            return *rh < *lh;
                                          });
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T*>& data)
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        os << (i == 0 ? "" : ", ") << *data[i];
    }

    return os << std::endl;
}

}

int main()
{
    {// 1 helpers and lambda
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
    }
    {// 2 memory model and runtime

        int a = 7;
        int b = 4;

        std::cout << "a = " << a << ", b = " << b << std::endl;

        Swap(&a, &b);

        std::cout << "a = " << a << ", b = " << b << std::endl;

        double cn = 2.15;
        double* c = &cn;
        double* d = nullptr;

        Swap(c, d);

        std::vector<float> v = {6.43, 1.24, 7.65, 4.23, 2.78, 14.56, 7.54, 6.33};

        std::vector<float*> vp;

        std::transform(v.begin(), v.end(), std::back_inserter(vp), [](auto& data) { return &data;});

        std::cout << vp;

        SortPointers(vp);

        std::cout << vp;

    }

    return 0;
}
