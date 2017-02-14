#include <iostream>
#include <vector>

using namespace std;

/// Place for function prototypes
void copyArray(int arrFrom[], int arrTo[], int &size) {
	for (int i = 0; i < size; i++) {
		arrTo[i] = arrFrom[i];
	}
	size = 0;
	return;
}
void printVect(vector<int> myFirstVector) {
	for (int i = 0; i < (int)myFirstVector.size(); i++) {
		if(i != (int)myFirstVector.size() -1)
		cout << (char)myFirstVector[i] << ":";
	}
	cout << endl;
}
/// Global Variables
int taylor[5];


void main() {
	taylor[0] = 0;
	cout << taylor << endl;
	for (int i = 1; i < 5; i++)
	{
		//cin >> taylor[i];
	}
	int cpy[5];
	int size = 5;
	//copyArray(taylor, cpy, size);
	for (int i = 0; i < size; i++)
	{
		//cout << cpy[i] << ", ";
	}

	vector<int> myFirstVector;
	string f = "Hello";
	for (int i = 0; i < (int)f.length(); i++) {
		myFirstVector.push_back((int)f[i]);
	}
	for (int i = 0; i < (int)myFirstVector.size(); i++) {
		cout << (char)myFirstVector[i] << ":";
	}
	cout << endl;
	for (int i = 0; i < (int)myFirstVector.size(); i++) {
		cout << myFirstVector.at(i) << ":";
	}
	cout << "\n";
	cout << myFirstVector.size() << endl;
	myFirstVector.pop_back();
	cout << myFirstVector.size() << endl;
	printVect(myFirstVector);
	cout << endl;
	for (int i = 0; i < (int)myFirstVector.size(); i++) {
		cout << myFirstVector.at(i) << ":";
	}
	cout << "\n";
	f = "o World!";
	for (int i = 0; i < (int)f.length(); i++) {
		myFirstVector.push_back((int)f[i]);
	}
	printVect(myFirstVector);

	/// Removing Values
	// Erasing one value 
	myFirstVector.erase(myFirstVector.begin());
	
	printVect(myFirstVector);
	/// Erase Multiple Values
	myFirstVector.erase(myFirstVector.begin() + 2, myFirstVector.end() - 3);
	printVect(myFirstVector);

	/*
	DYNAMIC ARRAYS and HOW I LIED
	
	*/
	//Pointer declared
	int * arr; // our first pointer
	//Dynamic Array Declar.
	size = myFirstVector.size();
	arr = new int[size];
	//fill
	for (int i = 0; i < size; i++) {
		arr[i] = myFirstVector[i];
		cout << arr[i] << ", ";
	}
	cout << endl;
	// clear vector 
	myFirstVector.clear();

	for (int i = 0; i < size; i++) {
		if(i != 2)
		myFirstVector.push_back(arr[i]);
	}

	arr = new int[myFirstVector.size()];
	for (int i = 0; i < size-1; i++) {
		arr[i] = myFirstVector[i];
		cout << arr[i] << ", ";
	}
	cout << endl;
	system("pause");
}