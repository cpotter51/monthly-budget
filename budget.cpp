#include <iostream>
using namespace std;

int main()
{

	//This program is based on the 50/30/20 budget rule for a bi-weekly earning.

	double income, wants, necessities, savings;

	cout << "What is your bi-weekly income? $";
	cin >> income;

	necessities = income * .5;

	wants = income * .3;

	savings = income * .2;

	cout << "You should be spending $" << necessities << " a week on necessities.\n";
	cout << "You can spend $" << wants << " a week on materialistic items.\n";
	cout << "You should put $" << savings << " into a savings or retirement account.\n";

}