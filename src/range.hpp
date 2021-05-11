#include "range.h"

#include <cmath>

template<typename T>
range<T>::range(T min, T max, T step) : m_min(min), m_max(max), m_step(step)
{
    static_assert(std::is_arithmetic_v<T>, "type must be numeric");
}

template<typename T>
size_t range<T>::size() const
{
    size_t size = std::round((m_max - m_min) / m_step);

    if (m_min + static_cast<T>(size) * m_step < m_max)
    {
        size++;
    }

    return size;
}

template<typename T>
typename range<T>::value_type range<T>::step() const
{
    return m_step;
}

template<typename T>
typename range<T>::value_type range<T>::min() const
{
    return m_min;
}

template<typename T>
range_iterator<range<T> > range<T>::begin()
{
    return range_iterator<range<T>>(this, m_min);
}

template<typename T>
range_iterator<range<T> > range<T>::end()
{
    return range_iterator<range<T>>(this, m_min + size() * m_step);
}

template<typename T>
range_iterator<T>::range_iterator(const range_iterator::range_type* const range
                                  , range_iterator::value_type start_value)
                                  : m_range(range)
                                  , m_value(start_value){}

template<typename T>
typename range_iterator<T>::value_type& range_iterator<T>::operator*()
{
    return m_value;
}

template<typename T>
typename range_iterator<T>::self_type& range_iterator<T>::operator++()
{
    m_value += m_range->step();
    return *this;
}

template<typename T>
typename range_iterator<T>::self_type range_iterator<T>::operator++(int)
{
    self_type tmp(*this);
    ++(*this);
    return tmp;
}

template<typename T>
bool range_iterator<T>::operator==(const range_iterator::self_type& other) const
{
    return (m_range == other.m_range) && (std::fabs(m_value - other.m_value) <= 1.e-22);
}

template<typename T>
bool range_iterator<T>::operator!=(const range_iterator::self_type& other) const
{
    return !(*this == other) && (std::fabs(m_value - m_range->min())  / m_range->step()) < m_range->size(); // защита от бесконечного цикла
}
