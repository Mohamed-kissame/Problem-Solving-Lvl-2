#include <iostream>
#include <cstdlib>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number) {

	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++) {

		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;

}

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter number of Elements:" << endl;

	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);

}

void CopyOnlyPrimeNumber(int arrSource[100] , int arrDestination[100] , int arrLength , int &arr2Length){

	int counter = 0;

	for (int i = 0; i < arrLength; i++)
	{

		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDestination[counter] = arrSource[i];

			counter++;

		}
	}

	arr2Length = --counter;

}

void PrinArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

void PrintPrimeNumberInArray() {

	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100], arr2Length = 0;
	CopyOnlyPrimeNumber(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements:\n";
	PrinArray(arr, arrLength);

	cout << "\nPrime Numbers in Array2:\n";
	PrinArray(arr2, arr2Length);

}

int main() {

	srand((unsigned)time(NULL));

	PrintPrimeNumberInArray();

	return 0;
}