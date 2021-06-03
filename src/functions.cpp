#include "functions.h"

#include <numeric>
#include <cmath>
#include <thread>

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

size_t find_prime_number_th(size_t prime_number_position)
{
    size_t num_count = 0, num = 3, prev_percent = 0;

    std::thread th([&num_count, &prime_number_position, &num, &prev_percent]()
    {
        std::cout << "procgress: " << std::endl;

        while (num_count < prime_number_position)
        {
            if (is_prime_number(num))
            {
                size_t percent = static_cast<size_t>(100.0 * (static_cast<double>(num_count) / prime_number_position));
                if (percent > prev_percent)
                {
                    prev_percent = percent;
                    std::cout << percent << "%" << std::endl;
                }

                if (++num_count == prime_number_position)
                {
                    std::cout << 100 << "%" << std::endl;
                    break;
                }
            }

            ++num;
        }
    });

    th.join();

    return num;
}

