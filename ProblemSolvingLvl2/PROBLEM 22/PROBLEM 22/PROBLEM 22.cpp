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

void ReadArray(int arr[100], int& arrLength) {

	cout << "Enter number of elemenets" << endl;
	cin >> arrLength;

	cout << "\nEnter array elemnets: \n";

	for (int i = 0; i < arrLength; i++) {

		cout << "Element [" << i + 1 << "] : ";

		cin >> arr[i];

	}
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)

		cout << arr[i] <<" ";

	cout << "\n";
}

int TimesRepeted(int Number, int arr[100], int arrLength) {

	int count = 0;

	for (int i = 0; i < arrLength; i++) {

		if (Number == arr[i]) {

			count++;
		}
	}

	return count;
}

void PrintResults() {

	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter the number you want to check:");

	cout << "\nOriginal array: ";
	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck << " is repeated " << TimesRepeted(NumberToCheck, arr, arrLength)
		<< " times(s)\n";
}

int main() {

	PrintResults();

	return 0;

}