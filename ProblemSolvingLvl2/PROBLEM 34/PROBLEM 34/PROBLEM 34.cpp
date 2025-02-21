#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

int ReadNumber() {

	int Number = 0;
	
	cout << "\nPlease Enter a number to search fo ?" << endl;

	cin >> Number;

	return Number;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

	cout << "Enter number of elements:" << endl;
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
short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] == Number)
		{

			return i;
		}
	}

	return -1;
}

void PrintPostionNumberInArray() {

	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	int Number = ReadNumber();
	cout << "\nNumber you are looking for is :" << Number << endl;

	short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

	if (NumberPosition == -2)
		cout << "The Number is not found :-(\n";
	else {
		cout << "The number found at position : " << NumberPosition << endl;
		cout << "The number found in order : " << NumberPosition +1<< endl;

	}
}

int main() {

	srand((unsigned)time(NULL));

	PrintPostionNumberInArray();

	return 0;
}