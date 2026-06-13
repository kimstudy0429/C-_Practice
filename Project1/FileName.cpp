#include <iostream>
using namespace std;
void main() {
	const int arr1[3] = { 1, 2, 3 };

	cout << arr1[0] << endl;
	//arr1[0] = 5;			//Error: assignment of read-only location 'arr1[0]'
	cout << arr1[0] << endl;
}