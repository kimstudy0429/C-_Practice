#include <iostream>
using namespace std;
void main() {
	const int arr1[3] = { 1, 2, 3 };
	int a = arr1[0];		//OK: read-only access to arr1[0]
	int result;

	result = arr1[0] + arr1[1] + arr1[2];
	
	cout << arr1[0] << endl;
	//arr1[0] = 5;			//Error: assignment of read-only location 'arr1[0]'
	cout << arr1[0] << endl; 
	cout << result << endl;


	
}