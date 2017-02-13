#include <iostream>
#include <vector>

using namespace std;
//Functions
void printARR(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			cout << "[";
		}
		else {
			cout << ", ";
		}
		cout << arr[i];
	}
	cout << "] \n";
}
void cpyARR(int from[], int to[], int size) {
	for (int i = 0; i < size; i++) {
		to[i] = from[i];
	}
}
void VALChng(int x) {
	x += 95;
}
void REFChng(int &x) {
	x += 50;
}
void printVEC(vector<int> t) {
	for (int i = 0; i < (int)t.size(); i++) {
		if (i % 2 == 0)
			cout << (char)t.at(i);
		else
			cout << (char)t[i];
	}
	cout << "\n";
}
//Global
int taylor[5];

void main() {
	taylor[0] = 0;
	cout << taylor << endl;
	taylor[1] = taylor[3] = 9;
	taylor[2] = taylor[4] = 3;

	int cpy[5];
	cout << "cpy :";
	printARR(cpy, 5);
	cpyARR(taylor, cpy, 5);
	cout << "cpy : ";
	printARR(cpy, 5);
	int x = 4;
	cout << "x : " << x << " : ";
	VALChng(x);
	cout << x << endl;

	// & * 
	cout << "& : " << &x << "\n"; // LOCATION 
	//cout << "* : " << *x; // MUST BE A POINTER
 	cout << "x : " << x << " : ";
	REFChng(x);
	cout << x << endl;
	 
	// Vectors
	vector <int> p4; // vector wrapped int period 4
	string f = "pAnc@Ke";

	for (int i = 0; i < (int)f.length(); i++) {
		p4.push_back((int)f[i]);
	}
	// p4 is size 7 
	cout << p4.size() << endl; // Gives us 7
	cout << "p4 : ";
	printVEC(p4);

	cout << "Size : " << p4.size();
	cout << "pop";
	p4.pop_back(); // Pops a value
	cout << "Size : " << p4.size();
	printVEC(p4);
	f = "e Breakfast!";
	for (int i = 0; i < (int)f.length(); i++) {
		p4.push_back((int)f[i]);
	}
	printVEC(p4);
	/// ERASING VALUES
	cout << "ERASE(BEGIN) \n";
	p4.erase(p4.begin());
	printVEC(p4);
	// MIdDLe;

	p4.erase(p4.begin() + 3, p4.end() - 5);
	printVEC(p4);

	/// Pointers

	int * ptr;
	/*
	Dynamic Arrays and How I lied to you.
	*/
	cout << "x    : "<<  x << endl;
	ptr = &x;
	cout << "ptr  : " << ptr << endl;
	cout << "&x   : " <<&x << endl;
	cout << "*ptr : "<< *ptr << endl;
	x = p4.size();
	//Dynamic array declaration
	ptr = new int[x];
	//int arry[x]; // Expression must have a constant value
	ptr = new int[x + 2]; // all values in old ptr array are gone
	p4.clear(); // removes all values from p4;
	delete ptr; // Talk about next class
	system("pause");
}