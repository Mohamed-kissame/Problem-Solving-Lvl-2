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
int CountDigitsFrequency(short DigitToCheck, int Number) {

	int freqCount = 0, Remainder = 0;

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder == DigitToCheck) {

			freqCount++;
		}

	}

	return freqCount;
}
void PrintAllDigitsFrequencey(int Number) {

	for (int counter = 0; counter < 10 ; counter++) {

		short DigitToCheck = 0;

		DigitToCheck = CountDigitsFrequency(counter, Number);

			

		if (DigitToCheck > 0) {


			cout << "Digit " << counter << " Frequency is " << DigitToCheck << " Time(s).\n";

		}
	}
}
int main() {

	int Number = ReadPositiveNumber("Please enter the number ?");
	PrintAllDigitsFrequencey(Number);

	return 0;
}