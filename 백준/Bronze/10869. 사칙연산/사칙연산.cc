#include <iostream>

using namespace std;


int main()
{
	int a, b;

	cin >> a >> b;

	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int rest = a % b;

	cout << sum << endl;
	cout << sub << endl;
	cout << mul << endl;
	cout << div << endl;
	cout << rest << endl;
}
