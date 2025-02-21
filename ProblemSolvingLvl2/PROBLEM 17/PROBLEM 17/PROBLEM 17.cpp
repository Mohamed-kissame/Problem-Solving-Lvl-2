#include <iostream>
#include<string>

using namespace std;

string ReadPassword() {

	string OrginalPassword = "";

	cout << "Please enter a 3-Letter Password (All Capital) ? : ";
	cin >> OrginalPassword;

	return OrginalPassword;
}

bool GeussPassword(string OrginalPassword) {

	string word = "";
	int counter = 0;

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int x = 65; x <= 90; x++) {

				counter++;

				word = word + char(i);
				word = word + char(j);
				word = word + char(x);

				cout << "Trial [" << counter << "] : " << word << endl;

				if (word == OrginalPassword) {

					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << counter << " Trail(s)\n";

					return true;
				}

				word = "";
			}
		}
	}

	return false;
}
int main() {

	GeussPassword(ReadPassword());

	return 0;
}