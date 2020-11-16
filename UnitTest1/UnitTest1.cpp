#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_11/defs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(CountTest)
	{
	public:
		
		TEST_METHOD(CountMethod1)
		{
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 0, 9},
				{0, 1, 2},
				{0, 0, 0},
			};
			Assert::AreEqual(count_zero_rows(matr, 5, 3), 3);
		}


		TEST_METHOD(CountMethod2)
		{
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{1, 1, 2},
				{50, 40, 60},
			};
			Assert::AreEqual(count_zero_rows(matr, 5, 3), 0);
		}
	};



	TEST_CLASS(DeleteFirstRowTest)
	{
	public:

		TEST_METHOD(DeleteFirstRowMethod1)
		{
			int rows = 5, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 0, 9},
				{0, 1, 2},
				{0, 0, 0}
			};
			
			int answ[MAX_ROWS][MAX_COLS] = {
				{4, 5, 6},
				{7, 0, 9},
				{0, 1, 2},
				{0, 0, 0}
			};

			deleteFirstRow(matr, rows, cols);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}
	};



	TEST_CLASS(AddRowTest)
	{
	public:

		TEST_METHOD(AddRowMethod1)
		{
			int rows = 3, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};
			int arr[3]{ 10, 20, 30 };
			int answ[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{10, 20, 30}
			};
			add_row_in_matrix(matr, rows, cols, 3, arr);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}


		TEST_METHOD(AddRowMethod2)
		{
			int rows = 3, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};
			int arr[3]{ 10, 20, 30 };
			int answ[MAX_ROWS][MAX_COLS] = {
				{10, 20, 30},
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};
			add_row_in_matrix(matr, rows, cols, 0, arr);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}


		TEST_METHOD(AddRowMethod3)
		{
			int rows = 3, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};
			int arr[3]{ 10, 20, 30 };
			int answ[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{10, 20, 30},
				{4, 5, 6},
				{7, 8, 9}
			};
			add_row_in_matrix(matr, rows, cols, 1, arr);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}
	};



	TEST_CLASS(TranspositionTest)
	{
	public:

		TEST_METHOD(TranspositionMethod1)
		{
			int rows = 5, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 0, 9},
				{0, 1, 2},
				{0, 0, 0}
			};
			int tr_matr[MAX_ROWS][MAX_COLS];
			int answ[MAX_ROWS][MAX_COLS] = {
				{1, 4, 7, 0, 0},
				{2, 5, 0, 1, 0},
				{3, 6, 9, 2, 0}
			};

			matrix_transposition(matr, rows, cols, tr_matr);
			for (int i{ 0 }; i < cols; i++) {
				for (int j{ 0 }; j < rows; j++) {
					Assert::AreEqual(tr_matr[i][j], answ[i][j]);
				}
			}
		}
	};



	TEST_CLASS(DeleteRowAndColTest)
	{
	public:

		TEST_METHOD(DeleteRowAndColMethod1)
		{
			int rows = 3, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};

			int answ[MAX_ROWS][MAX_COLS] = {
				{1, 3},
				{7, 9}
			};
			
			delete_row_and_col(matr, rows, cols, 1, 1);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}


		TEST_METHOD(DeleteRowAndColMethod2)
		{
			int rows = 3, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};

			int answ[MAX_ROWS][MAX_COLS] = {
				{1, 2},
				{4, 5}
			};

			delete_row_and_col(matr, rows, cols, 2, 2);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}


		TEST_METHOD(DeleteRowAndColMethod3)
		{
			int rows = 3, cols = 3;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};

			int answ[MAX_ROWS][MAX_COLS] = {
				{5, 6},
				{8, 9}
			};

			delete_row_and_col(matr, rows, cols, 0, 0);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}


		TEST_METHOD(DeleteRowAndColMethod4)
		{
			int rows = 4, cols = 5;
			int matr[MAX_ROWS][MAX_COLS] = {
				{1, 2, 3, 5, 6},
				{8, 9, 3, 5, 8},
				{4, 8, 5, 7, 3},
				{2, 8, 5, 4, 3}
			};

			int answ[MAX_ROWS][MAX_COLS] = {
				{1, 2, 5, 6},
				{4, 8, 7, 3},
				{2, 8, 4, 3}
			};

			delete_row_and_col(matr, rows, cols, 1, 2);
			for (int i{ 0 }; i < rows; i++) {
				for (int j{ 0 }; j < cols; j++) {
					Assert::AreEqual(matr[i][j], answ[i][j]);
				}
			}
		}
	};
}
