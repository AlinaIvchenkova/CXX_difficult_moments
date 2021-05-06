#include "functions.h"

#include <numeric>
#include <cmath>

void average(std::list<double>& list)
{
    list.push_back(std::accumulate(list.cbegin(), list.cend(), 0.f) / list.size());
}

