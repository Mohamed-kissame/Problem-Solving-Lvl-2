#include <iostream>


using namespace std;

void PrinHedeare() {

	cout << "\n\t\t\tMultiplication Table From 1 to 10\t\t\n\n";

	for (int i = 1; i <= 10; i++) {

		cout << "\t" << i;
	}

	cout << "\n_________________________________________________________________________________________\n";
}

string ColumTable(int i) {


	if (i < 10)
		return "   |";
	else
		return "  |";

}

void PrintTableMultiply() {

	PrinHedeare();

	for (int i = 1; i <= 10; i++)
	{

		cout << "  " << i << ColumTable(i) << "\t";


		for (int j = 1; j <= 10; j++) {


		  cout << i * j << "\t";


		}


		cout << endl;


	}
}

int main() {

	PrintTableMultiply();
	
	return 0;
}