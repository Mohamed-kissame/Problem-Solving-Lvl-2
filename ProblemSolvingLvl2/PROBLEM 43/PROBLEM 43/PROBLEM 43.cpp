#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength) {

	cout << "Enter Please number of Elements:";
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

int EvenCount(int arr[100], int arrLEngth) {

	int count = 0;

	for (int i = 0; i < arrLEngth; i++) {

		if (arr[i] % 2 == 0) {

			count++;
		}
	}

	return count;
}

void PrinEvenCount() {

	int arr[100], arrLength = 0;
	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray Elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nEven Numbers count is : ";
	cout << EvenCount(arr, arrLength) << endl;
}

int main() {

	srand((unsigned)time(NULL));

	PrinEvenCount();

	return 0;
}