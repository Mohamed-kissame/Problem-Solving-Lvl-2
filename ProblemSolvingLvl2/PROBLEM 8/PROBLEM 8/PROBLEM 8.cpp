#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
int CountDigitFrequency(short DigitToCheck, int Number) {

	int FreqCount = 0 , Remainder = 0;

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder == DigitToCheck) {

			FreqCount++;
		}
	}

	return FreqCount;
}

void PrintResults() {

	int Number = ReadPositiveNumber("Enter Please the main number ?");
	short DigitTocheck = ReadPositiveNumber("Please enter one Digit to check");

	cout << "\nDigt " << DigitTocheck << " Frequency is "
		<< CountDigitFrequency(DigitTocheck, Number) << " Time(s).\n";
}

int main() {

	PrintResults();

	return 0;
}