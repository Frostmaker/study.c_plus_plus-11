/*
1. Реализовать функцию для вычисления количества строк матрицы, содержащих нули
2. Завершить реализацию функции для удаления первой строки матрицы
3. Реализовать функцию для добавления в матрицу строки (массив значений строки и позиция вставки K передаются как параметры функции вместе с самой матрицей и ее исходными размерами)
4. Реализовать функцию, транспонирующую матрицу

5. Реализовать функцию для вычеркивания из матрицы строки с индексом M и столбца с индексом N (M, N - параметры функции)
6. Реализовать функцию подсчета определителя квадратной матрицы
*/

#include <iostream>
#include "defs.h"

using namespace std;


int main()
{

    const int MAX_ROWS = 50;
    const int MAX_COLS = 50;

    int rows{ 6 }, cols{ 3 };
    int arr[3]{ 10, 20, 30 };

    setlocale(LC_ALL, "Rus");


    int matr[MAX_ROWS][MAX_COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 0, 9},
        {0, 1, 2},
        {0, 0, 0},
        {123, 456, 789}
    };
    cout << count_zero_rows(matr, 6, 3) << '\n';
    printMatrix(matr, 6, 3);
    deleteFirstRow(matr, rows, cols);
    printMatrix(matr, 5, 3);
    add_row_in_matrix(matr, rows, cols, 2, arr);
    printMatrix(matr, rows, cols);
    int tr_matr[MAX_ROWS][MAX_COLS];
    matrix_transposition(matr, rows, cols, tr_matr);
    printMatrix(tr_matr, cols, rows);
}
