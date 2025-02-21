#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

	cout << "Enter number of Elements:";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

int CountPositiveNumber(int arr[100], int arrLength) {

	int count = 0;

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] >= 0) {

			count++;
		}
	}

	return count;
}

void PrintCountPositiveNumebr() {

	int arr[100], arrLength = 0;
	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(arr, arrLength);

	cout << "\nPositive Numbers count is ";
	cout << CountPositiveNumber(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrintCountPositiveNumebr();

	return 0;
}