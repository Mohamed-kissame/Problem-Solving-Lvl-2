#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int &arrLength) {

	cout << "Enter number of elements :" << endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int SumArray(int arr[100], int arrLength) {

	int sum = 0;

	for (int i = 0; i < arrLength;i++) {

		sum += arr[i];
	}

	return sum;
}

float AverageArray(int arr[100], int arrLength) {

	return (float) SumArray(arr, arrLength) / arrLength;
}

void PrintResultsOfAverageArray() {

	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray Element :";
	PrintArray(arr,arrLength);

	cout << "\nAverage of all numbers is :";
	cout << AverageArray(arr, arrLength) << endl;

}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfAverageArray();

	return 0;
}