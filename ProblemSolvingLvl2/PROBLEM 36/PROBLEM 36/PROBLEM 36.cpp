#include<iostream>

using namespace std;

int ReadNumber() {

	int Number = 0;

	cout << "Please Enter a number ? : " ;
	cin >> Number;

	return Number;
}
void AddArrayElement(int number, int arr[100], int& arrLength) {

	arr[arrLength++] = number;
	
}
void InputUserNumbersInArray(int arr[100], int& arrLength) {

	bool continueInput = true;

	do {

		AddArrayElement(ReadNumber(), arr, arrLength);

		cout << "Do you want to add more numbers? [0]:No [1]:yes? : " ;

		cin >> continueInput;

	} while (continueInput);

}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0;i < arrLength;i++) {

		cout << arr[i] << " ";
	}

	cout << "\n";
}

void PrintResultsOfArray() {

	int arr[100], arrLength = 0;
	InputUserNumbersInArray(arr, arrLength);

	cout << "\nArray Length: " << arrLength << endl;
	cout << "Array elements: ";
	PrintArray(arr, arrLength);
}

int main() {

	PrintResultsOfArray();

	return 0;
}