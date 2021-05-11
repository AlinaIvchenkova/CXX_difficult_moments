#pragma once

#include <vector>
#include <optional>

template <typename T>
class Matrix
{

public:
    // создает матрицу m x n, заполненную нулями
    Matrix(size_t m, size_t n);

    // создает матрицу m x n, заполненную данными из вектора;
    // если вектор меньше размера матрицы, остальные значения
    // в матрице заполняются нулями
    // если вектор больше размера матрицы, значения вектора не
    // попадающие в диапазон игнорируются
    Matrix(size_t m, size_t n, const std::vector<T>& data);
    std::optional<double> determinant() const;

private:
    size_t m_line_count;
    size_t m_column_count;
    std::vector<T> m_data;
};

#include "matrix.hpp"
