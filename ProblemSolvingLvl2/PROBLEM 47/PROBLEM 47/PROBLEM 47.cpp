#include <iostream>

using namespace std;

float GetFractionPart(float Number) {

	return  Number - (int)Number;
}

int MyRound(float Number) {

	int InPart;
	InPart = int(Number);

	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)

			return ++Number;
		else
			return --Number;
	}
	else
	{
		return InPart;
	}
}

float ReadNumber() {

	float Number = 0;

	cout << "Enter a float Number : ";
	cin >> Number;

	return Number;
}

int main() {

	float Number = ReadNumber();
	cout << "\nMy Round Results : " << MyRound(Number) << endl;
	cout << "C++ Round Results: " << round(Number) << endl;

	return 0;
}