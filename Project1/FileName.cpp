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
#if 0
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

#if 0
// 비교 연산자
// 참이면 1, 거짓이면 0을 반환한다.
void main() {
	int a, b;
	a = 10;
	b = 20;

	cout << (a == b) << endl;	//false
	cout << (a != b) << endl;	//true
	cout << (a > b) << endl;	//false
	cout << (a < b) << endl;	//true
	cout << (a >= b) << endl;	//false
	cout << (a <= b) << endl;	//true

}
#endif

#if 0
// 논리 연산자
// 참이면 1, 거짓이면 0을 반환한다.
void main() {
	int a = 0;
	int b = 1;
	cout << !a << endl;	//true
	cout << !b << endl;

	cout << (a && b) << endl;	//false
	cout << (a || b) << endl;	//true

}
#endif

#if 1
// 비트 연산자
void main() {
	int a = 5;		//0000 0101
	int b = 3;		//0000 0011
	cout << (a & b) << endl;	//0000 0001 -> 1
	cout << (a | b) << endl;	//0000 0111 -> 7
	cout << (a ^ b) << endl;	//0000 0110 -> 6
	cout << (~a) << endl;		//1111 1010 -> -6
}
#endif