#include "functions.h"

#include <numeric>
#include <cmath>

void average(std::list<double>& list)
{
    list.push_back(std::accumulate(list.cbegin(), list.cend(), 0.f) / list.size());
}

void split_sentence(std::istream& stream)
{
    auto cmp = [](const std::string& lhs, const std::string& rhs){ return lhs.size() < rhs.size(); };

    std::set<std::string, decltype (cmp)> set_sentence(cmp);

    std::string str, sentence;
    while (stream >> str)
    {
        if (str.find_first_of(".!?") != std::string::npos)
        {
            sentence += sentence.size() != 0 ? (" " + str) : str;
            set_sentence.insert(sentence);
            sentence.clear();
        }
        else
        {
            sentence += str;
        }
    }

    std::cout << std::endl;

    for (const auto& sentence : set_sentence)
    {
        std::cout << sentence << std::endl;
    }

    std::cout << std::endl;
}

bool is_prime_number(size_t number)
{
    bool is_prime = true;

    if (number == 0 || number == 1)
    {
        is_prime = false;
    }
    else
    {
        for (size_t i = 2; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                is_prime = false;
            }
        }
    }

    return is_prime;
}

size_t find_prime_number(size_t prime_number_position)
{
    size_t num_count = 2, num = 3;

    while (num_count < prime_number_position)
    {
        if (is_prime_number(num))
        {
            if (++num_count == prime_number_position)
            {
                return num_count;
            }
        }

        ++num;
    }

    return 0;
}

void doSomething(int number) {
    std::cout << "start thread " << number << std::endl;
    std::cout << "stop thread " << number << std::endl;
}
