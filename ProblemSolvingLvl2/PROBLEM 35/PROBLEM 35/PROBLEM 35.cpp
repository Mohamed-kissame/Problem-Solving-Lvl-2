#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber() {

	int Number = 0;

	cout << "\nPlease enter a number to search" << endl;
	cin >> Number;

	return Number;
}

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

void FillArrayWithRandomNumber(int arr[100], int &arrLength) {

	cout << "Enter number of elements:\n";
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

short FindNumberPositionInArray(int number , int arr[100] , int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] == number) {

			return i;
		}
	}

	return -1;

}

bool IsNumberInArray(int number, int arr[100], int arrLength) {

	return FindNumberPositionInArray(number, arr, arrLength) != -1;
	
}

void PrintIfNumberInArray() {

	int arr[100], arrLength;
	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray 1 elements: \n";
	PrintArray(arr, arrLength);

	int Number = ReadNumber();
	cout << "\nNumber you are looking for is : " << Number << endl;

	if(!IsNumberInArray(Number,arr,arrLength))

		cout << "No, The number is not found :-(\n";
	else
	{
		cout << "Yes it is found :-)\n";
	}
}

int main() {

	srand((unsigned)time(NULL));

	PrintIfNumberInArray();

	return 0;
}