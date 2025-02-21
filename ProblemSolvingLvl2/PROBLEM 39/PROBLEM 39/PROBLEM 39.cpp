#include <iostream>
#include<cstdlib>

using namespace std;

enum enPrimeOrNotPrime {Prime = 1 , NotPrime = 2};

enPrimeOrNotPrime CheckNumber(int number) {

	int M = round(number / 2);

	for (int i = 2; i <= M; i++) {

		if (number % i == 0) {

			return enPrimeOrNotPrime::NotPrime;
		}
	}

	return enPrimeOrNotPrime::Prime;
}

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
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

void CopyOnlyPrimeNumberInArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {

	for (int i = 0; i < arrLength;i++)
	{
		if (CheckNumber(arrSource[i]) == enPrimeOrNotPrime::Prime) {

			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		}
	}
}

void PrintResultsOfPrimeNumbersInArray() {

	int arr[100], arrLength = 0, arr2length = 0;

	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100];
	CopyOnlyPrimeNumberInArray(arr, arr2, arrLength, arr2length);

	cout << "\nArray 1 elemnets:\n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Prime numbers:\n";
	PrintArray(arr2, arr2length);
}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfPrimeNumbersInArray();

	return 0;
}