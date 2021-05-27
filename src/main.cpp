#include "phone_book.h"
#include "timer.h"
#include "functions.h"
#include "matrix.h"
#include "range.h"

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include <string>
#include <fstream>
#include <numeric>

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

        std::cout << std::endl << "----STL containers seq----" << std::endl;
        std::list<double> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        std::cout << nums;

        average(nums);

        std::cout << nums;

        Matrix m1(2, 2, std::vector<int>{11, -2, 7, 5});

        std::cout << m1.determinant().value() << std::endl;

        Matrix m2(3, 3, std::vector<int>{3, 3, -1, 4, 1, 3, 1, -2, -2});

        std::cout << m2.determinant().value() << std::endl;

        Matrix m3(3, 3, std::vector<double>{1, 0, -2, 0.5, 3, 1, 0, 2, -1});

        std::cout << m3.determinant().value() << std::endl;

        for (int i : range<int>(10, 200))
        {
            std::cout << i << ' ';
        }

        std::cout << std::endl;

        for (int i : range<int>(10, 200, 3))
        {
            std::cout << i << ' ';
        }

        std::cout << std::endl;

        for (int i : range<int>(10, 200, 2))
        {
            std::cout << i << ' ';
        }

        std::cout << std::endl;

        for (double i : range<double>(10.2143232, 212.323, 2.34543245))
        {
            std::cout << i << ' ';
        }

        std::cout << std::endl;

        for (double i : range<double>(-212.323, -10.2143232, 2.34543245))
        {
            std::cout << i << ' ';
        }

        std::cout << std::endl;
    }
    {// 4 algorithms

        std::cout << std::endl << "----algorithms----" << std::endl;
        std::vector<int> vector{7, -8, 2, -35, 1, 53, -78, 105, 44, 65, 44, -22};
        std::list<double> list{2.435, 1.432, 2.673, 73.543, 89.325, 5.341, 0.002, 0.111};
        std::deque<size_t> deque{64, 108, 63, 563, 1, 3, 1, 65, 432, 643, 134, 21};

        std::sort(vector.begin(), vector.end());
        list.sort();
        std::sort(deque.begin(), deque.end());

        std::cout << vector;
        std::cout << list;
        std::cout << deque;

        std::cout << std::endl << "----insert_sorted----" << std::endl;

        insert_sorted(vector, 44);
        insert_sorted(vector, 0);

        insert_sorted(list, -1.);
        insert_sorted(list, -1.22);

        insert_sorted(deque, static_cast<size_t>(1000));
        insert_sorted(deque, static_cast<size_t>(1));

        std::cout << vector;
        std::cout << list;
        std::cout << deque;


        unsigned int amplitude = 3;
        std::vector<double> analog_signals(100);
        std::generate(analog_signals.begin()
                     , analog_signals.end()
                     , [&amplitude](){ return amplitude * (-1.f + static_cast<double>(rand()) * 2 / RAND_MAX); });

        std::vector<int> digital_signals;
        digital_signals.reserve(analog_signals.size());

        std::transform(analog_signals.cbegin()
                      , analog_signals.cend()
                      , std::back_inserter(digital_signals)
                      , [](double signal){ return static_cast<int>(signal); });

        std::cout << std::endl << "----analog_signals----" << std::endl;

        //std::cout << analog_signals;
        copy(analog_signals.cbegin(), analog_signals.cend(), std::ostream_iterator<double>(std::cout, " "));
        std::cout << std::endl;

        std::cout << std::endl << "----digital_signals----" << std::endl;

        //std::cout << digital_signals;
        copy(digital_signals.cbegin(), digital_signals.cend(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;

        std::vector<double> errors;
        errors.reserve(analog_signals.size());

        std::transform(digital_signals.cbegin()
                      , digital_signals.cend()
                      , analog_signals.cbegin()
                      , std::back_inserter(errors)
                      , [](double digital_signal, double analog_signal){ return digital_signal - analog_signal; });

        std::cout << std::endl << "----errors----" << std::endl;

        std::cout << errors;

        double error = std::inner_product(digital_signals.cbegin()
                                          , digital_signals.cend()
                                          , analog_signals.cbegin()
                                          , 0.f
                                          , std::plus<double>()
                                          , [](double digital_signal, double analog_signal){ return (digital_signal - analog_signal) * (digital_signal - analog_signal); });

        std::cout << std::endl << "----error----" << std::endl;

        std::cout << error << std::endl;
    }
    {// 5 associative containers

        std::cout << std::endl << "----associative containers----" << std::endl;

        std::vector<unsigned int> v1{5, 6, 3, 6, 6, 7, 2, 6, 9, 5, 3, 3, 6, 2};
        std::deque<float> d1{5.635, 6.356, 4.235, 7.345, 8.545, 3.353, 2.345, 3.454};
        std::list<int> l1{-44, 32, 11, -44, 9, -44, 11, -44, 32, 9, 11, -45, -23, -23, 9};

        unique_print(v1.begin(), v1.end());
        unique_print(d1.begin(), d1.end());
        unique_print(l1.begin(), l1.end());


        split_sentence(std::cin);
    }
    {// 6 parallel programming

    }

    return 0;
}
