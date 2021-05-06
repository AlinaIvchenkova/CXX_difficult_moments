#include "matrix.h"

#include <type_traits>
#include <math.h>

template<typename T>
Matrix<T>::Matrix(size_t m, size_t n) : m_line_count(m)
                                      , m_column_count(n)
                                      , m_data(m * n, 0)
{
    static_assert (std::is_integral<T>::value, "type must be numeric");
}

template<typename T>
Matrix<T>::Matrix(size_t m
                 , size_t n
                 , const std::vector<T>& data)
                 : m_line_count(m)
                 , m_column_count(n)
                 , m_data(data)
{
    static_assert (std::is_integral<T>::value, "type must be numeric");
    m_data.resize(m * n, 0);
}

template<typename T>
std::optional<double> Matrix<T>::determinant() const
{
    std::optional<double> determinant = std::nullopt;

    if (m_line_count == m_column_count)
    {
        size_t matrix_size = m_line_count * m_column_count;

        if (matrix_size == 1)
        {
            determinant = m_data.front();
        }
        else if (matrix_size == 4)
        {
            determinant = m_data[0] * m_data[3] - m_data[1] * m_data[2];
        }
        else
        {
            determinant = 0;

            for (size_t p = 0; p < m_line_count; p++)
            {
                std::vector<T> temp_matrix;
                for (size_t line = 1; line < m_line_count; line++)
                {
                    std::vector<T> tmp_row;
                    for (size_t column = 0; column < m_column_count; column++)
                    {
                        if (column != p)
                        {
                           tmp_row.push_back(m_data[line * m_column_count + column]);
                        }
                    }
                    if (tmp_row.size() > 0)
                    {
                        temp_matrix.insert(temp_matrix.cend(), tmp_row.begin(), tmp_row.end());
                    }

                }

                if (auto det = Matrix(m_line_count - 1, m_column_count - 1, temp_matrix).determinant())
                {
                    determinant = determinant.value() + m_data[p] * std::pow(-1, p) * (*det);
                }
            }
        }
    }

    return determinant;

}
