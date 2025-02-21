#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool IsPerfectNumber(int Number) {

	int sum = 0;

	for (int i = 1 ; i < Number ; i++)

		if (Number % i == 0)
		{
			sum += i;
		}

	return Number == sum;
}
void PrintResults(int Number) {

	if (IsPerfectNumber(Number))

		cout << Number << " Is Perfect Number. \n";
	else
		cout << Number << " Is Not Perfect Number.\n";
	
}

int main() {

	PrintResults(ReadPositiveNumber("Please eneter a positive number ?"));

	return 0;
}