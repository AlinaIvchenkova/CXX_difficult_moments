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
            sentence += (" " + str);
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
