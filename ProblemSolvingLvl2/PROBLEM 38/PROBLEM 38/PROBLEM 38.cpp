#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of elements : ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		cout << arr[i] << " ";

	}

	cout << "\n";
}

void AddArrayElement(int number, int arr[100], int& arrLength) {

	arrLength++;
	arr[arrLength - 1] = number;
}

void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {

	for (int i = 0; i < arrLength; i++) {

		if (arrSource[i] % 2 != 0) {

			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		}
	}
}

void PrintResultsOfCopyOddNumInArray() {

	int arr[100], arrLength = 0, arr2length = 0;
	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100];
	CopyOddNumbers(arr, arr2, arrLength, arr2length);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Odd numbers:\n";
	PrintArray(arr2, arr2length);
}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfCopyOddNumInArray();

	return 0;
}