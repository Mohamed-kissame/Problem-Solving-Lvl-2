#include <iostream>
using namespace std;

float GetFranctionPart(float Number) {

	return Number - (int)Number;
}

int MyCeil(float Number) {

	if (abs(GetFranctionPart(Number)) > 0)

		if (Number > 0)
			return (int)Number + 1;
		else
			return int(Number);
	else
		return Number;
}

float ReadNumber() {

	float Number = 0;

	cout << "Enter a float Number : ";
	cin >> Number;

	return Number;
}

int main() {

	float Number = ReadNumber();
	cout << "My Ceil Results  : " << MyCeil(Number) << endl;
	cout << "C++ Ceil Results : " << ceil(Number) << endl;

	return 0;
}