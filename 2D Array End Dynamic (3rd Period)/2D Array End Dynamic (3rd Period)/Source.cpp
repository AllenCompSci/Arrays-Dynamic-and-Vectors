    #include <iostream>
    #include <string>
#include <vector>
using namespace std;

void main() {
	//        ROW COL FIXED
	int your2D[4][4];
	/*
	your1D0Array[4] row 1 -> your2D[0][4]
	your1D1Array[4] row 2 -> your2D[1][4]
	your1D2Array[4] row 3 -> your2D[2][4]
	your1D3Array[4] row 4 -> your2D[3][4]
	*/
	// Dynamic
	int * *dynamic;
	// DEFINE ROWS
	int ROW = 4;
	dynamic = new int *[ROW];
	// Define uniform COL
	int COL = 6;
	int ColROOM[] = { 5, 7, 5, 5 }; // ARRAY OF COLS by RoW
	// REGULAR 2D ARRAY
	for (int i = 0; i < ROW; i++) {
		dynamic[i] = new int[COL]; // Assigns uniform number of cols to each row
	}
	cout << "DYNAMIC : " <<  dynamic << endl;
	cout << "Row 0 : " << dynamic[0] << endl;
	cout << "Row 1 : " << dynamic[1] << endl;
	cout << "Row 2 : " << dynamic[2] << endl;
	cout << "Row 3 : " << dynamic[3] << endl;

	// IRREGULAR
	for (int i = 0; i < ROW; i++) {
		dynamic[i] = new int[ColROOM[i]]; // Assigns cols based on ColROOM array
	}
	cout << "DYNAMIC : " << dynamic << endl;
	cout << "Row 0 : " << dynamic[0] << endl;
	cout << "Row 1 : " << dynamic[1] << endl;
	cout << "Row 2 : " << dynamic[2] << endl;
	cout << "Row 3 : " << dynamic[3] << endl;

	for (int i = 0; i < ROW; i++) {
		cout << "[";
		for (int j = 0; j < ColROOM[i]; j++)
		{
			if (j != 0)
				cout << ", ";
			cout << dynamic[i][j];
		}
		cout << "]\n";
	}


	vector<vector<int>> my2DVector;
	for (int i = 0; i < 5; i++) {
		vector<int> t;
		my2DVector.push_back(t);
	}
	my2DVector.at(2).push_back(3);
	cout << my2DVector.at(2).at(0) << endl;
	my2DVector[3].push_back(5);
	my2DVector[3].push_back(4);
	cout << my2DVector[2][0] << endl; 
	system("pause");
}