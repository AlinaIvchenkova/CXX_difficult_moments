#pragma once

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

template <typename T>
void Swap(T* const rh,  T* const lh)
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

template <typename T, typename TA, template <typename = T, typename = TA> class Container>
std::ostream& print_container(const Container<>& data)
{
    for (auto it = data.cbegin(); it != data.cend(); ++it)
    {
        std::cout << (it == data.cbegin() ? "" : ", ") << *it;
    }

    return std::cout << std::endl;
}


void average(std::list<double>& list);

template<typename R> bool equals(R a, R b, R e)
{
    return a == b;
}

template<> bool equals(double a, double b, double e);

template<> bool equals(float a, float b, float e);
