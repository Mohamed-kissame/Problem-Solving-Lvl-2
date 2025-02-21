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

		arr[i] = RandomNumber(-100, 100);

}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

int NegativeCount(int arr[100], int arrLength) {

	int count = 0;

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] < 0) {

			count++;

		}
	}

	return count;
}

void PrintCountNegativeNumber() {

	int arr[100], arrLength = 0;
	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nNegative Numbers count is : \n";
	cout << NegativeCount(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrintCountNegativeNumber();

	return 0;
}