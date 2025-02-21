#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of Elemnts :\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)

		cout << arr[i] << " ";
}

int MinNumberInArray(int arr[100], int arrLength) {

	int min = 0;
	min = arr[0];

	for (int i = 0; i < arrLength;i++)
	{
		if (arr[i] < min) {

			min = arr[i];
		}
	}

	return min;
}

void PrintResultsOfMinNumberInArray() {

	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nElemnt of Arry : ";
	PrintArray(arr, arrLength);

	cout << "\nMin Number is :";
	cout << MinNumberInArray(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfMinNumberInArray();

	return 0;
}