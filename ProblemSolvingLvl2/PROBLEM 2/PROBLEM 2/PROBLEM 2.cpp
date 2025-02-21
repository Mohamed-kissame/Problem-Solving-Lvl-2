#include <iostream>
#include <string>

using namespace std;

enum enPrimeOrNotPrime {Prime = 1 , NotPrime = 2};

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPrimeOrNotPrime CheckResults(int Number) {

	int Results = round(Number / 2);

	for (int counter = 2; counter <= Results; counter++)
	{
		if (Number % counter == 0)
			return enPrimeOrNotPrime::NotPrime;
	}
		return enPrimeOrNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number) {

	cout << "\n";
	cout << "Prime Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl;

	for (int counter = 1; counter <= Number; counter++)
	{
		if (CheckResults(counter) == enPrimeOrNotPrime::Prime) {

			cout << counter << endl;
		}
	}
}

int main() {

	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter please a apositive number ? "));

	return 0;
}