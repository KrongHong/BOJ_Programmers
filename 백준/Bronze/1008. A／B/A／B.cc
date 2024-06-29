#include <iostream>

using namespace std;

void numDiv(double x, double y);

int main()
{
	double A, B;
	cin >> A >> B;

	cout << fixed;
	cout.precision(9);

	numDiv(A, B);
}

void numDiv(double x, double y)
{
	double div = 0;
	div = x / y;

	cout << div;
}