#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of Elements :" << endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)

		cout << arr[i] << " ";

	cout << "\n";
}

int SumElemntesOfArray(int arr[100], int arrLength) {

	int sum = 0;

	for (int i = 0; i < arrLength; i++) {

		sum += arr[i];
	}

	return sum;

}

void PrintResultsOfSumElemnts() {

	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nElements of Array is :";
	PrintArray(arr, arrLength);

	cout << "\nSum of All number is :";
	cout << SumElemntesOfArray(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfSumElemnts();

	return 0;
}