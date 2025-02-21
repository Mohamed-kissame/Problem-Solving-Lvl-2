#include <iostream>

using namespace std;

void AddElementsInArray(int number, int arr[100], int& arrLength) {

	arrLength++;
	arr[arrLength - 1] = number;
}


void FillArray(int arr[100], int number, int& arrLength) {

	bool continu = true;

	do {

		cout << "Enter your Number To Fill Array : ";
		cin >> number;

		AddElementsInArray(number, arr, arrLength);

		cout << "Do you want to keep fill array? [0]:No [1]:Yes? : ";
		cin >> continu;

		cout << "\n";

		
	} while (continu);

}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";

	}

	cout << "\n";
}

bool IsPlaindromeArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {

		if (arr[i] != arr[Length - i - 1]) {

			return false;
		}
	}

	return true;
}

int main() {

	int arr[100], number = 0, arrLength = 0;

	FillArray(arr,number,arrLength);

	cout << "\nArray Elements:\n";
	PrintArray(arr, arrLength);

	if (IsPlaindromeArray(arr, arrLength))
		cout << "\nYes array is Palindrome\n";
	else
		cout << "\nNo array is Not Palindrome :-)\n";

	return 0;
}