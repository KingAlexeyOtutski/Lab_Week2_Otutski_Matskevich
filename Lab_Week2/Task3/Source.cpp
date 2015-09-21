#include<iostream>
using namespace std;

int onlyzerosnofactorial(int n)
{
	return 0;
}

void check(int amountof0, int n)
{
	int zeros = onlyzerosnofactorial(n);
	if (amountof0 == zeros)
		cout << "Alright. Works for " << n << "." << endl;
	else
		cout << "Fail. Doesn't work for " << n << "." << endl;
}

void main()
{
	check(1, 5);
	check(2, 10);
	check(19, 84);
	check(124, 501);
	check(213, 862);
	check(249, 1000);
	check(1249, 5000);
	check(1250, 5005);
}