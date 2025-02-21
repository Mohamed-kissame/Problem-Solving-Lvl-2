#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadPositiveNumber(string Message) {

	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void FillArratWithRandomNumber(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

void sumOf2array(int arr[100], int arr2[100], int arrSum[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		arrSum[i] = arr[i] + arr2[i];
	}
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

void PrintResultsOfSUm2Array() {

	int arr[100], arr2[100], arrSum[100];
	int arrLength = ReadPositiveNumber("How many elements ?");

	FillArratWithRandomNumber(arr, arrLength);
	FillArratWithRandomNumber(arr2, arrLength);

	sumOf2array(arr, arr2, arrSum, arrLength);

	cout << "\nArray 1 elemEnets:";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elemenets:";
	PrintArray(arr2, arrLength);

	cout << "\nSum of array1 and array2 elements:\n";
	PrintArray(arrSum, arrLength);
}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfSUm2Array();

	return 0;
}