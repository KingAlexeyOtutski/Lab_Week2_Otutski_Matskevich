#include<iostream>
using namespace std;


int maxN(int n, int m)
{
	if (n > m)
		return n;
	else
		return m;
}
int onlyzerosnofactorial(int n)
{
	int a[1500];
	int k = n;
	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}
	int nmbof5, nmbof2;
	nmbof5 = 0;
	nmbof2 = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i] % 5 == 0)
				nmbof5++;
			if (a[i] % 2 == 0)
				nmbof2++;
		}
		return maxN(nmbof2, nmbof5);
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
