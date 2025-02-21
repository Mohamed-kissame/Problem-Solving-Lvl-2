#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRAndomNumber(int arr[100], int& arrLength) {

	cout << "Enter Number of elements: " << endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++)

		cout << arr[i] << " ";
}

int MaxNumberInArray(int arr[100], int arrLength) {

	int Max = 0;

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] > Max) {

			Max = arr[i];
		}
	}

	return Max;

}

void PrintResultsOfMaxNumInArray() {

	int arr[100], arrLength;

	FillArrayWithRAndomNumber(arr, arrLength);

	cout << "\nAraay Elemnts : ";
	PrintArray(arr, arrLength);

	cout << "\nMax Number is : ";
	cout << MaxNumberInArray(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfMaxNumInArray();

	return 0;
}
