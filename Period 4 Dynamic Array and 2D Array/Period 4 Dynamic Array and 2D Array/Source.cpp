#include<iostream>
#include<fstream>
using namespace std;
void print(int array[][5], int Row) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < 5; j++) {
			cout << array[i][j] << endl;
		}
	}
}
void print(int ** ptr, int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 5; j++) {
			cout << ptr[i][j] << endl;
		}
	}
}
void main() {

	// 2D Array           ROW  COL
	int period4First2DArray[5][5];
	int pre[][3] = {
		{4,4,5}, 
		{3,4,3},
		{2,5}
	};
	cout << pre[2][2] << endl;
	/// 2 D Dynamic array
	int ROW = 4;
	int COL = 5;
	// Use pointers but how?
	int * * per4;
	// this pointer points to an array of pointers
	// which each value in the array
	// points to an array of ints.

	// define per4 2D array
	per4 = new int *[ROW];
	// First Type UNIFORM
	for (int i = 0; i < ROW; i++) {
		per4[i] = new int[COL];
	}
	print(per4, ROW);
	print(period4First2DArray, 4);
	// Irregular distribution
	int students[] = { 5,7,6,4 };
	for (int i = 0; i < ROW; i++) {
		per4[i] = new int[students[i]];
	}
	/*       i     j
	per4 Row 0 has 5 ints
	per4 Row 1 has 7 ints
	per4 Row 2 has 6 ints
	per4 Row 3 has 4 ints
	  j    0  1  2  3  4  5  6 
	    i	  
	    0  1  2  3  4  5  
		1  6  7  8  9 10 11 12
		2 13 14 15 16 17 18
		3 19 20 21 22
	
	*/
	//ACCESS
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j <   students[i]; j++)///sizeof(*per4[i])/sizeof(per4[i][0]); j++) //(DOESNT WORK WITH sizeof on pointer)
		{
			cout << j << " t:"  << per4[i][j] << endl;
		}
	}
	//print(per4, ROW); // THROW ERROR
	/* You CAN NOT pass an irregular multi
	array to a function as a parameter
	You must declare the COL size of the multiDimenisional 
	Array when you define the parameter list
	void print(int array[][5])

	*/
	ofstream outF;
	outF.open("Test.txt");
	outF << 4 << " " << 5 << endl;
	int x = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (j != 0)
				outF << " ";
			outF << x++;
		}
		outF << "\n";
	}
	outF.close();
	

	system("pause");
}