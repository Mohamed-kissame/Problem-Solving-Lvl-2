#include <iostream>

using namespace std;

float MyABS(float Number) {

	if (Number > 0)
		return Number;
	else

	return Number * -1;
}

float ReadNumber() {

	float Number = 0;

	cout << "Please enter a number : ";
	cin >> Number;

	return Number;
}

int main() {

	float Number = ReadNumber();

	cout << "\nMy abs Results : " << MyABS(Number) << endl;
	cout << "C++ abs Results  : " << abs(Number)   << endl;

	return 0;
}