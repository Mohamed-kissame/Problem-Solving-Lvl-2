#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of Elemnets :" << endl;

	cin >> arrLength;

	for (int i = 0; i < arrLength;i++)

		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++)
	{

		cout << arr[i] << " ";
	}

	cout << "\n";
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)

		arrDestination[i] = arrSource[i];
}

void PrintResultsOfCopyArray() {

	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100];
	CopyArray(arr, arr2, arrLength);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copy:\n";
	PrintArray(arr2, arrLength);

}

int main() {

	srand((unsigned)time(NULL));

	PrintResultsOfCopyArray();

	return 0;
}