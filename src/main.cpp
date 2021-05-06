#include "phone_book.h"
#include "timer.h"
#include "functions.h"
#include "matrix.h"
#include "range.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <fstream>

#include <locale>
#include <codecvt>

static const std::wstring vowel = L"ауоыиэяюёе";

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

        std::cout << std::endl << "----memory model and runtime----" << std::endl;
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

        std::cout << std::endl;

        std::wifstream file("/home/alina/projects/CXX_difficult_moments/src/war_and_peace.txt");

        std::wstring wstr;

        // apply BOM-sensitive UTF-8 facet
        file.imbue(std::locale(file.getloc(), new std::codecvt_utf8<wchar_t, 0x10ffff, std::consume_header>));

        size_t count = 0;

        Timer t_1("count_if + .find");

        std::for_each(std::istream_iterator<std::wstring, wchar_t>(file)
                      , std::istream_iterator<std::wstring, wchar_t>()
                      , [&count](const auto& word)
                      {
                            count += std::count_if(
                                word.cbegin()
                                , word.cend()
                                , [](wchar_t letter)
                                {
                                    return vowel.find(static_cast<wchar_t>(std::tolower(letter))) != std::wstring::npos;
                                });

                      });

        t_1.print();
        std::cout << "count_if + .find count: " << count << std::endl << std::endl;

        count = 0;

        file.clear();
        file.seekg(0, std::ios::beg);

        Timer t_2("count_if + for");

        std::for_each(std::istream_iterator<std::wstring, wchar_t>(file)
                      , std::istream_iterator<std::wstring, wchar_t>()
                      , [&count](const auto& word)
                      {
                          count += std::count_if(
                              word.cbegin()
                              , word.cend()
                              , [](auto letter) -> bool
                              {
                                  for (auto vowel_letter : vowel)
                                  {
                                      if (vowel_letter == static_cast<wchar_t>(std::tolower(letter)))
                                      {
                                          return true;
                                      }
                                  }

                                  return false;
                              });

                      });

        t_2.print();
        std::cout << "count_if + for count: " << count << std::endl << std::endl;

        count = 0;

        file.clear();
        file.seekg(0, std::ios::beg);

        Timer t_3("for + .find");

        std::for_each(std::istream_iterator<std::wstring, wchar_t>(file)
                      , std::istream_iterator<std::wstring, wchar_t>()
                      , [&count](const std::wstring& word)
                      {
                            for (auto letter : word)
                            {
                                if (vowel.find(static_cast<wchar_t>(std::tolower(letter))) != std::string::npos)
                                {
                                    ++count;
                                }
                            }
                      });

        t_3.print();
        std::cout << "for + .find count: " << count << std::endl << std::endl;


        count = 0;

        file.clear();
        file.seekg(0, std::ios::beg);

        Timer t_4("for + for");

        std::for_each(std::istream_iterator<std::wstring, wchar_t>(file)
                      , std::istream_iterator<std::wstring, wchar_t>()
                      , [&count](const std::wstring& word)
                      {
                            for (auto letter : word)
                            {
                                for (auto vowel_letter : vowel)
                                {
                                    if (vowel_letter == static_cast<wchar_t>(std::tolower(letter)))
                                    {
                                        ++count;
                                    }
                                }
                            }
                      });

        t_4.print();
        std::cout << "for + for count: " << count << std::endl << std::endl;
    }
    {// 3 STL_containers_seq

        std::list<double> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        print_container(nums);

        average(nums);

        print_container(nums);

        Matrix m1(2, 2, std::vector<int>{11, -2, 7, 5});

        std::cout << m1.determinant().value() << std::endl;

        Matrix m2(3, 3, std::vector<int>{3, 3, -1, 4, 1, 3, 1, -2, -2});

        std::cout << m2.determinant().value() << std::endl;

        std::cout << '[';
        for (int i : range<int>(10, 12))
        {
            std::cout << i << ' ';
        }

        std::cout << ']' << std::endl;
    }

    return 0;
}
