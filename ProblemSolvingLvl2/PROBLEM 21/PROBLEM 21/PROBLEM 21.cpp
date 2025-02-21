#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum enCharType {SmallLetter = 1 , CapitalLetter = 2 , SpecialCharacter= 3 , DIgits = 4};

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

char GetRandomCharacter(enCharType charType) {

	switch (charType) {

	case enCharType::SmallLetter: {
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter: {
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter: {
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::DIgits: {
		return char(RandomNumber(48, 57));
		break;
	}
	}

	return charType;
}

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

string GenerateWord(enCharType charType, short Length) {

	string word ;

	for (int i = 0; i <= Length; i++)
	{
		word += GetRandomCharacter(charType);
	}

	return word;
}

string GeneretedKey() {

	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(short NumberofKeys) {

	for (int i = 1; i <= NumberofKeys;i++) {

		cout << "Key [" << i << "] : ";
		cout << GeneretedKey() << endl;
	}
}

int main() {

	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("enter please How many Keys to Generate?"));

	return 0;
}