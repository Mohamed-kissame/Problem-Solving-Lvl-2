#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength) {

	// This mean Hard coded

	arrLength = 10;

	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}

short FindeNumberPositionInArray(int number, int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] == number) {

			return i;
		}
	}

	return -1;
}

bool IsNumberInArray(int number, int arr[100], int arrLength) {

	return FindeNumberPositionInArray(number, arr, arrLength) != -1;
}

void AddArrayElement(int number, int arr[100], int& arrLength) {

	arrLength++;
	arr[arrLength - 1] = number;
}

void CopyDistincNumbersToArray(int arrSource[100], int arrDistination[100], int SourceLength, int& DistinationLength) {

	for (int i = 0; i < SourceLength; i++) {

		if (!IsNumberInArray(arrSource[i], arrDistination, DistinationLength)) {

			AddArrayElement(arrSource[i], arrDistination, DistinationLength);
		}
	}
}

void PrintDistincNumberToArray() {

	int arrSource[100], SourceLength = 0, arrDistination[100], DestinationLength = 0;
	FillArray(arrSource, SourceLength);

	cout << "\Array 1 elements:\n";
	PrintArray(arrSource, SourceLength);

	CopyDistincNumbersToArray(arrSource, arrDistination, SourceLength, DestinationLength);

	cout << "\nArray 2 Distinct elements:\n";
	PrintArray(arrDistination, DestinationLength);
}

int main() {

	PrintDistincNumberToArray();

	return 0;
}