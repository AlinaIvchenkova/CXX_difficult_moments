#include "range.h"

template<typename T>
range<T>::range(T min, T max, T step) : m_min(min), m_max(max), m_step(step)
{
    static_assert (std::is_integral<T>::value, "type must be numeric");
}

template<typename T>
T range<T>::operator[](size_t index)
{
    return (m_min + index * m_step);
}

template<typename T>
size_t range<T>::size()
{
    return static_cast<size_t>((m_max - m_min) / m_step);
}

template<typename T>
typename range<T>::value_type range<T>::step() const
{
    return m_step;
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
    return (m_range == other.m_range) && (equals<value_type>(m_value, other.m_value, m_range->step()));
}

template<typename T>
bool range_iterator<T>::operator!=(const range_iterator::self_type& other) const
{
    return !(*this == other);
}

template<typename T>
range_iterator<T>::operator value_type() const
{
    return m_value;
}


