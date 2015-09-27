#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

const double Pi = 3.141592653589793115997963468544;

double oursin(double e, double x)
{
	return 0;
	//I planned that you, Vlad, would code your part of job in this function.
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