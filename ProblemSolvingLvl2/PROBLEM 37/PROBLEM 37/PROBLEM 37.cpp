#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of Elements :";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

void AddArrayElements(int number, int arr[100], int& arrLength) {

	arrLength++;
	arr[arrLength - 1] = number;
}

void CopyArrayUsingAddElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {

	for (int i = 0; i < arrLength; i++) {

		AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
	}
}

void PrintCopyArrayWIthAddElements() {

	int arr[100], arrLength = 0, arr2Length = 0;

	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100];
	CopyArrayUsingAddElement(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copy:\n";
	PrintArray(arr2, arr2Length);
}

int main() {

	srand((unsigned)time(NULL));

	PrintCopyArrayWIthAddElements();

	return 0;
}