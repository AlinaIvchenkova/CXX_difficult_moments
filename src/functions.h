#pragma once

#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <iostream>
#include <type_traits>
#include <iterator>
#include <mutex>

template <typename T>
inline T random_(T min, T max)
{
    if (min > max){
        std::swap(min, max);
    }
    auto random = static_cast<double>(std::rand()) / RAND_MAX;
    return min + random * ( max - min );
}

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

template <typename T, typename Allocator, template <typename = T, typename = Allocator> class Container>
void insert_sorted(Container<>& data, const T& value)
{
    auto lower_bound = std::lower_bound(data.begin(), data.end(), value);
    data.insert(lower_bound, value);
}

void average(std::list<double>& list);

template <typename InputIt>
void unique_print(InputIt begin, InputIt end)
{
    using Type = typename InputIt::value_type;

    std::set<Type> unique_container(begin, end);

    std::copy(unique_container.cbegin()
             , unique_container.cend()
             , std::ostream_iterator<typename InputIt::value_type>(std::cout, " "));

    std::cout << std::endl;
}

template <typename T>
void pcout(std::mutex& m, const T& data)
{
    std::lock_guard<std::mutex> m_lg(m);
    std::cout << data <<std::endl;
}

void doSomething(int number);

void split_sentence(std::istream& stream);

bool is_prime_number(size_t number);

size_t find_prime_number_th(size_t prime_number_position);
