#pragma once

#include <vector>
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


