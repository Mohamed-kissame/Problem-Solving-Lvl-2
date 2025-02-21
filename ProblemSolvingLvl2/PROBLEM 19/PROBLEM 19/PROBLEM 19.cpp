#include<iostream>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

	//this function to genertae a random number

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

int main() {

	//Seeds thr random number generator in c++, Called only once
	srand((unsigned)time(NULL));


	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;

	return 0;

}