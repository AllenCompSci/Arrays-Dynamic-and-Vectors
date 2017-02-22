#include <iostream>

using namespace std;

void main() {
	//       ROW  COL
	int your2d[4][4]; 
	// this 4 arrays that are each size 4
	/*
	its the same as saying 
	your0[4]
	your1[4]
	your2[4]
	your3[4]
	*/
	// Single dynamic
	int * arra;
	arra = new int[4];

	// 2D Dynamic Array
	int * * array2D;
	// ROW 
	int ROW = 5;
	// COL
	int COL = 17;
	
	array2D = new int *[ROW];
	cout << array2D << endl;
	// UNIFORM ARRAY (REGULAR)
	for (int i = 0; i < ROW; i++) {
		array2D[i] = new int[COL];
	}

	cout << array2D << endl;
	cout << array2D[0] << endl;
	cout << array2D[1] << endl;
	cout << array2D[2] << endl;
	cout << array2D[3] << endl;
	// IRREGULAR
	array2D[0] = new int[3];
	array2D[1] = new int[7];
	array2D[2] = new int[8];
	array2D[3] = new int[7];
	arra[0] = 3;
	arra[1] = 7;
	arra[2] = 8;
	arra[3] = 7;
	cout << array2D << endl;
	cout << array2D[0] << endl;
	cout << array2D[1] << endl;
	cout << array2D[2] << endl;
	cout << array2D[3] << endl;
	for (int i = 0; i < ROW; i++) {
		for(int j = 0; j < arra[i]; j++) {
			if (j != 0)
				cout << ", ";
			cout << array2D[i][j];
		}
		cout << endl;
	}
	system("pause");
}