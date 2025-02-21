#include <iostream>
#include<string>

using namespace std;

enum enGetCharacter {SmallLetter = 1 , CapitalLetter = 2 , SpecialCHAR = 3 , Digits = 4};

int ReadPositiveNumber(string Message) {

	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

char GetRandomChar(enGetCharacter CharType) {

	switch (CharType) {

	case enGetCharacter::SmallLetter: {
		return RandomNumber(97, 122);
		break;
	}

	case enGetCharacter::CapitalLetter: {
		return RandomNumber(65, 90);
		break;
	}

	case enGetCharacter::SpecialCHAR: {
		return RandomNumber(33, 47);
		break;
	}

	case enGetCharacter::Digits:
		return RandomNumber(48, 56);
		break;
	}

	return CharType;
}

void PrintStringArray(string arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {

		cout << "Array[" << i << "] :";
		cout << arr[i] << "\n";
	}

	cout << "\n";
}

string GenerateWord(enGetCharacter charType, short Length) {

	string word;

	for (int i = 1; i <= Length; i++) {

		word += GetRandomChar(charType);
	}

	return word;
}

string GenerateKey() {

	string key = "";

	key = GenerateWord(enGetCharacter::CapitalLetter, 4) + "-";
	key += GenerateWord(enGetCharacter::CapitalLetter, 4) + "-";
	key += GenerateWord(enGetCharacter::CapitalLetter, 4) + "-";
	key += GenerateWord(enGetCharacter::CapitalLetter, 4);

	return key;
}

void FillArrayWithKey(string arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++)

		arr[i] = GenerateKey();
}

void PrintArrayWithKey() {

	string arr[100];
	int arrLength = 0;

	arrLength = ReadPositiveNumber("How many Keys do you want to generate?");

	FillArrayWithKey(arr, arrLength);

	PrintStringArray(arr, arrLength);
}

int main() {

	srand((unsigned)time(NULL));

	PrintArrayWithKey();

	return 0;
}