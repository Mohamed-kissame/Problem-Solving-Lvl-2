#include <iostream>
using namespace std;

int MySqrt(float Number) {

	return pow(Number, 0.5);
}

float ReadNumber() {

	float Number = 0;

	cout << "Please eneter a Number : ";
	cin >> Number;

	return Number;
}

int main() {

	float Number = ReadNumber();
	cout << "My Sqrt Results : " << MySqrt(Number) << endl;
	cout << "C++ Sqrt Results : " << sqrt(Number) << endl;

	return 0;
}