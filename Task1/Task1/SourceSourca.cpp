#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

const double Pi = 3.141592653589793115997963468544;

double fact(int n)
{
	double s = 1.;
	for (int i = 1; i <= n; i++)
		s = s*i;
	return s;
}

double oursin(double e, double x)
{
	double calc_sin = 0;
	int i = 0;
	while (abs(sin(Pi*x / 180) - calc_sin)* 1000000 > e * 1000000)
	{
		calc_sin += pow(-1, i) * (pow(x,2*i+1) / fact(2*i+1));
		i++;
	}
	return calc_sin;
}

void check(double e, double x)
{
	if (abs(sin(Pi*x / 180) - oursin(e, x)) <= e)
		cout << "Alright. Works for " << x << " with " << e << " precision." << endl;
	else
		cout << "Fail. Doesn't work for " << x << " with " << e << " precision." << endl;
}

void main()
{
	double x;
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.0001, x);
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.00001, x);
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.000001, x);
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.0000001, x);
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.00000001, x);
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.000000001, x);
	cout << "Enter x (using degree system):";
	cin >> x;
	check(0.0000000001, x);
}
