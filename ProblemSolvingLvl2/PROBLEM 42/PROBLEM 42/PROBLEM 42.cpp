#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of elements:";
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

int OddCount(int arr[100], int arrLength) {

	int count = 0;

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] % 2 != 0) {

			count++;
		}
	}

	return count;
}

void PrintOddCount() {

	int arr[100], arrLength = 0;
	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray Elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nOdd Numbers count is :";
	cout << OddCount(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrintOddCount();

	return 0;
}