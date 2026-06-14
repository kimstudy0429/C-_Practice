#include <iostream>
using namespace std;
#if 0
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
#endif
//연산자
#if 1
void main() {
	char a, b;
	a = 10;		//대입 연산자
	a++;		//후위형 증감 연산자
	cout << +a << endl;	
	++a;		//전위형 증감 연산자
	cout << +a << endl;

	b = 5;
	b--;		//후위형 감소 연산자
	cout << +b << endl;
	--b;		//전위형 감소 연산자
	cout << +b << endl;


}
#endif