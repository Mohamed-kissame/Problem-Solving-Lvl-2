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
void PrintInvertedLetterPattern(int Number) {

	cout << "\n";

	for (int i = 65 + Number - 1; i >= 65; i--) {

		for (int j = i; j >= 65; j--) {

			cout << char(i);
		}

		cout << endl;
	}
}

int main() {

	PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number ?"));

	return 0;
}