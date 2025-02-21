#include<iostream>
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

bool IsPerfectNumbers(int Number) {

	int sum = 0;

		for (int counter = 1; counter < Number; counter++)
		{
			if (Number % counter == 0) 

				sum += counter;

				
		}

		return Number == sum;
}

void PrintResults(int number) {

	for (int i = 1; i <= number; i++)
	{
		if (IsPerfectNumbers(i)) {

			cout << i << endl;
		}
	}
}

int main() {

	PrintResults(ReadPositiveNumber("ENTER PLEASE A POSITIVE NUMBER ?"));

	return 0;
}