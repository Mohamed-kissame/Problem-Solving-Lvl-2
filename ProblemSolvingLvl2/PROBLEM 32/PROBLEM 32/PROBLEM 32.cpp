#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;

}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enetr number of elements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)

		arrDestination[i] = arrSource[arrLength-1-i];
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100];
	CopyArrayInReverseOrder(arr, arr2, arrLength);

	cout << "\nArray 1 elemenets:\n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copy:\n";
	PrintArray(arr2, arrLength);

	return 0;
}