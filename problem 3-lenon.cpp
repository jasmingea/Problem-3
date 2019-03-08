#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()
{

	float netBalance;
	float payment;
	float d1;
	float d2;

	cout << "Enter netBalance" << endl;
	cin >> netBalance;

	cout << "Enter payment" << endl;
	cin >> payment;

	cout << "Enter d1" << endl;
	cin >> d1;

	cout << "Enter d2" << endl;
	cin >> d2;

	cout << "average daily balance" <<  (netBalance * d1 – payment * d2) / d1 << endl;
	 _getch();

	 return 0;
}