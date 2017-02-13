#include <iostream>

using namespace std;

const int ROW = 3;
const int COL = 5;
#pragma region example
void print2DPOINTER(int ** p, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			if (j != 0) {
				cout << ", ";
			}
			else {
				cout << "[";
			}
			cout << p[i][j];
		}
		cout << " ] \n";
	}

}
/*
void print2D(int p[][], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			if (j != 0) {
				cout << ", ";
			}
			else {
				cout << "[";
			}
			cout << p[i][j];
		}
		cout << " ] \n";
	}

}

*/
// COL has to be defined and be correct
void print2D(int p[][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			if (j != 0) {
				cout << ", ";
			}
			else {
				cout << "[";
			}
			cout << p[i][j];
		}
		cout << " ] \n";
	}

}
#pragma endregion


void main() {


	// Method 1
#pragma region HIDE1
	int test1[ROW][COL];
#pragma endregion
	// Method 2
#pragma region HIDE2
	int ** test2;

	test2 = new int *[ROW];
	for (int i = 0; i < ROW; i++) {
		test2[i] = new int[COL];
	}
#pragma endregion
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
		{
			cin >> test1[i][j];
			test2[ROW - (1 + i)][COL - (1 + j)] = test1[i][j];
		}

	}

	print2D(test1,ROW,COL);

	cout << "****************************************" << endl;
	print2DPOINTER(test2, ROW, COL);


	cout << endl;
	system("pause");

}