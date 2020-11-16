#include <iostream>
#include <iomanip>

#ifndef MAX_ROWS, MAX_COLS

const int MAX_ROWS = 50;
const int MAX_COLS = 50;

#endif // !MAX_ROWS, MAX_COLS

using namespace std;

void printMatrix(int matr[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Форматированный вывод для выравнивания столбцов
            std::cout << std::setw(std::cout.precision() * 2 + 1);
            std::cout << matr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    cout << '\n';
    return;
}


int count_zero_rows(int matr[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    // Функция выводит количество строк с нулями

    int k{ 0 };
    for (int i{ 0 }; i < rows; i++) {
        bool zero_in_row{ false };
        for (int j{ 0 }; j < cols; j++) {
            if (matr[i][j] == 0) {
                zero_in_row = true;
                break;
            }
        }
            if (zero_in_row) {
                k++;
            }
    }

    return k;
}


void deleteFirstRow(int matr[MAX_ROWS][MAX_COLS], int& rows, int& cols)
{
    // Функция удаляет первую строку матрицы

    for (int i{ 0 }; i < rows - 1; i++) {
        for (int j{ 0 }; j < cols; j++) {
            matr[i][j] = matr[i + 1][j];
        }
    }

    rows--;
    return;
}


void add_row_in_matrix(int matr[MAX_ROWS][MAX_COLS], int& rows, int& cols, int K, int* arr)
{
    // Функция добавляет в матрицу строку элементов на позицию <K>

    for (int i{ rows + 1 }; i > K; i--) {
        for (int j{ 0 }; j < cols; j++) {
            matr[i][j] = matr[i - 1][j];
        }
    }
    for (int j{ 0 }; j < cols; j++) {
        matr[K][j] = arr[j];
    }

    rows++;
    return;
}


void matrix_transposition(int matr[MAX_ROWS][MAX_COLS], int rows, int cols, int tr_matr[MAX_ROWS][MAX_COLS])
{
    // Функция возращает транспонированную матрицу

    for (int i{ 0 }; i < rows; i++) {
        for (int j{ 0 }; j < cols; j++) {
            tr_matr[j][i] = matr[i][j];
        }
    }

    return;
}


void delete_row_and_col(int matr[MAX_ROWS][MAX_COLS], int& rows, int& cols, int M, int N)
{
    // Функция удаляет из матрицы строку с индексом <M> и столбец с индексом <N>

    for (int i{ M }; i < rows - 1; i++) {
        for (int j{ 0 }; j < cols; j++) {
            matr[i][j] = matr[i + 1][j];
        }
    }
    rows--;
    for (int i{ 0 }; i < rows; i++) {
        for (int j{ N }; j < cols - 1; j++) {
            matr[i][j] = matr[i][j + 1];
        }
    }
    cols--;

    return;
}