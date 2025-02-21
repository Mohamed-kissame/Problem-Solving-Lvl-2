#include <iostream>
using namespace std;

int MyFloor(float Number) {

	if (Number >= 0)

		return int(Number);
	else

		if (Number != int(Number))
			return int(Number) - 1;
		else
			return int(Number);
}

float ReadNumber() {

	float Number = 0;

	cout << "Enter a number : ";
	cin >> Number;

	return Number;
}

int main() {

	float Number = ReadNumber();
	cout << "My Floor Results  : " << MyFloor(Number) << endl;
	cout << "C++ Floor Results : " << floor(Number) << endl;

	return 0;
}
