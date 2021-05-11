#pragma once

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <type_traits>

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

template <typename T, typename Allocator, template <typename = T, typename = Allocator> class Container
         , std::enable_if_t<not std::is_same_v<std::string, Container<T, Allocator>>, bool> = true
         >
std::ostream& operator<<(std::ostream& os, const Container<>& data)
{
    for (auto it = data.cbegin(); it != data.cend(); ++it)
    {
        os << (it == data.cbegin() ? "" : ", ") << *it;
    }

    return os << std::endl;
}


void average(std::list<double>& list);
