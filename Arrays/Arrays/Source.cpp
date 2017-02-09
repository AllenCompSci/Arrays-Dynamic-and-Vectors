#include <iostream>
#include <vector> // New 
#include <string>
using namespace std;

int taylor[5];

void increase(int &x) {
	x += 5;
}
void check(int x) {
	x += 5;
}
void change(double t[]) {
	for (int i = 0; i < 4; i++) {
		t[i] += 9;
	}
}
void print(double t[], int x) {
	
	for (int i = 0; i < x; i++) {
		cout << t[i] << ", ";
	}
	cout << endl;
}
void main() {
	taylor[0] = 1;
	double myCheck[] = { 4.2,1.3, 4.7, 5.6 };
	int var = 1;
	cout << &var << endl;
	cout << var << endl;
	increase(var);
	cout << var << endl;
	check(var);
	cout << var << endl;
	print(myCheck, 4);
	change(myCheck);
	print(myCheck,4);
	double guess[30];
	for (int i = 0; i < 30; i++) {
		guess[i] = -1;
	}
	int curr = 0;
	for (; curr < 30; curr++) {
		cout << "Number : ";
		double num;
		cin >> num;
		if (num > 0) {
			guess[curr] = num;
		}
		else {
			break;
		}
	}
	print(guess, curr);
	vector <string> firstVect;
	string line = "";
	while (line != "stop") {
		if(line != "")
			firstVect.push_back(line);
		cout << "Gimmie a word : ";
		cin >> line;

	}
	cout << firstVect.size() << endl;
	cout << firstVect.at(0) << endl;
	cout << firstVect[0] << endl;
	firstVect.pop_back();
	cout << firstVect.size() << endl;
	system("pause");
}