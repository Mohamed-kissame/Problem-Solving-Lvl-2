#include<iostream>
#include<string>

using namespace std;

void PrintWordsFroomAAAtoZZZ() {

	cout << "\n";
	string word = "";

	for (int i = 65; i <= 90; i++) {

		for (int j = 65 ; j <= 90; j++) {

			for (int x = 65; x <= 90; x++) {

				word = word + char(i);
				word = word + char(j);
				word = word + char(x);

				cout << word << endl;

				word = "";

			}
		}

		cout << "\n__________________________________________\n";
	}
}
int main() {

	PrintWordsFroomAAAtoZZZ();

	return 0;
}