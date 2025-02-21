#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0 ;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int ReverseNumber(int Number) {

	int Remainder = 0, Number2 = 0;

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}
bool IsPlaindromeNumber(int Number) {

	return (Number == ReverseNumber(Number));
}
void PrintResults() {

	if (IsPlaindromeNumber(ReadPositiveNumber("Please Enter A Positive Number ?")))

		cout << "\nYes , it is a Palindrome number .\n";
	else
		cout << "\nNo , it is Not a Palindrome number .\n";
}

int main() {

	PrintResults();

	return 0;
}