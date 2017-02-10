#include <iostream>
#include <string>
#include <vector>


using namespace std;
/// .at() to call value of vector
void print(vector<int> ex) {
	for (int i = 0; i < ex.size(); i++) {
		if (i != 0) {
			cout << ", ";
		}
		cout << ex.at(i);
	}
	cout << '\n';
}
/// uses [] to call value of vector 
void print2(vector<int> ex) {
	for (int i = 0; i < ex.size(); i++) {
		if (i != 0) {
			cout << ", ";
		}
		cout << ex[i];
	}
	cout << '\n';
}

void main() {
	vector<int> example;

	for (int i = 0; i < 10; i++) {
		example.push_back(i);
	}
	
	print(example);
	print2(example);
	example[2] = 45;
	print(example);
	example.pop_back();
	print(example);
	/// ERASE A SINGLE VALUE
	example.erase(example.begin() + 2);
	print(example);
	/// ERASE MULTIPLE VALUES
	example.erase(example.begin() + 2, example.end() - 2);
	print(example);
	int size = example.size();
	int * arr; // Pointer
	arr = new int[size]; // Dynamic declartion of an array
	for (int i = 0; i < size; i++) {
		arr[i] = example.at(i);
		cout << arr[i] << ", ";
	}
	cout << endl;
	example.push_back(45);
	arr = new int[example.size()];
	
	for (int i = 0; i < example.size(); i++) {
		arr[i] = example.at(i);
		cout << arr[i] << ", ";
	}
	cout << endl;

	int x = 96;
	delete arr; // deletes the array created with new
	arr = &x;
	cout << arr << endl;
	cout << *arr << endl;
	system("pause");

}