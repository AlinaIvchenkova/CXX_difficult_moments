#pragma once

#include <type_traits>
#include <cmath>

template<typename T>
class range_iterator;

template<typename T>
class range
{
public:
    using  value_type = T;

    range(T min, T max, T step = T(1));

    T operator[](size_t index);

    size_t size();
    value_type step() const;

    range_iterator<range<T>> begin();
    range_iterator<range<T>> end();

private:
    T m_min;
    T m_max;
    T m_step;
};

template<typename T>
class range_iterator
{
public:
    using range_type = T;
    using self_type = range_iterator<range_type>;
    using value_type = typename range_type::value_type;

    range_iterator(const range_type* const range, value_type start_value);

    operator value_type() const;

    value_type& operator*();

    self_type& operator++();

    self_type operator++(int);



    bool operator==(const self_type& other) const;

    bool operator!=(const self_type& other) const;

private:
    const range_type* const m_range;
    value_type m_value;
};

#include "range.hpp"
