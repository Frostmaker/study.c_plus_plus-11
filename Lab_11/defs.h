#ifndef MAX_ROWS, MAX_COLS

const int MAX_ROWS = 50;
const int MAX_COLS = 50;

#endif // !MAX_ROWS, MAX_COLS

void printMatrix(int matr[MAX_ROWS][MAX_COLS], int rows, int cols);
int count_zero_rows(int matr[MAX_ROWS][MAX_COLS], int rows, int cols);
void deleteFirstRow(int matr[MAX_ROWS][MAX_COLS], int& rows, int& cols);
void add_row_in_matrix(int matr[MAX_ROWS][MAX_COLS], int& rows, int& cols, int K, int* arr);
void matrix_transposition(int matr[MAX_ROWS][MAX_COLS], int rows, int cols, int tr_matr[MAX_ROWS][MAX_COLS]);