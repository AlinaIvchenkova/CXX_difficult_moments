#include "functions.h"

#include <numeric>

void average(std::list<double>& list)
{
    list.push_back(std::accumulate(list.cbegin(), list.cend(), 0.f) / list.size());
}

template<> bool equals(double a, double b, double e)
{
    return std::abs(a - b) < std::abs(e);
}

template<> bool equals(float a, float b, float e)
{
    return std::abs(a - b) < std::abs(e);
}
