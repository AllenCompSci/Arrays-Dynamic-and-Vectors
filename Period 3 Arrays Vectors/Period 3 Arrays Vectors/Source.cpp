#include <iostream>
#include <vector>

using namespace std;

void change(int x) {
	x += 94;
}
void changeREF(int &x) {
	x += 94;
}

void cpyArrayVal(int from[], int to[], int size) {
	for (int i = 0; i < size; i++) {
		to[i] = from[i];
	}
	return;
}

void printARRY(int ar[], int size) {
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			cout << "[";
		}
		else {
			cout << ", ";
		}
		cout << ar[i];
	}
	cout << "]\n";
}
void printVect(vector<int> p3) {
	for (int i = 0; i < (int) p3.size(); i++) {
		cout << (char)p3[i];
	}
	cout << "\n";
}
// Global
int taylor[5];

void main() {
	taylor[0] = 4;
	// Access arrays value 
	cout << taylor << endl;
	taylor[1] = taylor[2] = taylor[3] = taylor[4] = 9;
	int cpy[5];

	cout << "taylor : ";
	printARRY(taylor, 5);
	cout << "cpy : ";
	printARRY(cpy, 5);
	cpyArrayVal(taylor, cpy, 5);
	cout << "cpy : ";
	printARRY(cpy, 5);
	int x = 4;
	cout << x << ":";
	change(x);
	cout << x << endl;

	// & * 
	//cout << "* : " << *x; // opperand must be a pointer ***
	cout << "& : " << &x << endl;
	cout << x << ":";
	changeREF(x);
	cout << x << endl;

	//Vectors 
	vector<int> p3;
	string f = "CanAda";
	for (int i = 0; i < (int)f.length(); i++) {
		p3.push_back((int)f[i]);
	}
	cout << "len:" << f.length() << endl;
	cout << "siz:" << p3.size() << endl;

	p3.pop_back();

	cout << "siz:" << p3.size() << endl;

	for (int i = 0; i < p3.size(); i++) {
		if (i == 0) {
			cout << "[";
		}
		else {
			cout << ", ";
		}
		if (i % 2 == 0)
			cout << p3.at(i);
		else
			cout << p3[i];
	}
	cout << "] \n";

	f = "a o' CanADA";
	for (int i = 0; i < (int)f.length(); i++) {
		p3.push_back((int)f[i]);
	}
	printVect(p3);
	p3.erase(p3.begin());
	printVect(p3);
	p3.erase(p3.begin() + 2, p3.end() - 7);
	printVect(p3);
	p3.clear(); // Erases all values from vector

	/*
	Dynamic array and how i lied to you
	*/
	// * <- Pointer
	int * ptr; // This variable holds a location

	ptr = &x;
	cout << ptr << endl; //displays location of x
	cout << *ptr << endl; // displays value of x

	// Dynamic array declaration
	ptr = new int[x];
	// fill
	for (int i = 0; i < x; i++) {
		ptr[i] = i + 4;
		cout << ptr[i] << ", ";
		if (i + 1 % 10 == 0) {
			cout << "\n";
		}
	}

	x = 5;
	// Doesn't change size of ptr yet

	ptr = new int[x];
	cout << endl;
	for (int i = 0; i < x; i++) {
		ptr[i] = i + 4;
		cout << ptr[i] << ", ";
		if (i + 1 % 10 == 0) {
			cout << "\n";
		}
	}
	
	cout << endl;
	

	system("pause");
}