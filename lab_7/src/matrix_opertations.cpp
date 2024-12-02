// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include "matrix_operations.hpp"
#include "utils.hpp"
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

namespace MatrixOperations {

    // I would create a Matrix class, but we have to use functions, not methods...

    void inputMatrix(int** matrix, int size) {
        for (int row = 0; row < size; row++) {
            for (int column = 0; column < size; column++) {
                int value;
                cin >> value;
                matrix[column][row] = value;
            }
        }
    }

    MatrixMaxAndMin getMinAndMax(int** matrix, int size) {
        int max_value = INT_MIN;
        int min_value = INT_MAX;
        for (int row = 0; row < size; row++) {
            for (int column = 0; column < size; column++) {
                int value = matrix[column][row];
                if (value > max_value) max_value = value;
                if (value < min_value) min_value = value;
            }
        }
        return MatrixMaxAndMin(min_value, max_value);
    }

    void processMatrix(int** matrix, int size) {
        MatrixMaxAndMin minAndMaxOfMatrix = getMinAndMax(matrix, size);
        int min_sum = getSumOfDigits(minAndMaxOfMatrix.min());
        int max_sum = getSumOfDigits(minAndMaxOfMatrix.max());
        if (abs(min_sum - max_sum) > 2) return;
        sort(matrix, matrix + size, [size](int* f_column, int* s_column) {
            int f_column_sum = accumulate(f_column, f_column + size, 0);
            int s_column_sum = accumulate(s_column, s_column + size, 0);
            return f_column_sum < s_column_sum;
        });
    }

    void showMatrix(int** matrix, int size) {
        for (int row = 0; row < size; row++) {
            for (int column = 0; column < size; column++) {
                cout << matrix[column][row] << " ";
            }
            cout << endl;
        }
    }
}