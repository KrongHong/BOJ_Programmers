#include <iostream>

using namespace std;

void numSum(int x, int y);

int main()
{
	int A, B;
	cin >> A >> B;
	numSum(A, B);
}

void numSum(int x, int y)
{
	int sum = 0;
	sum = x + y;

	cout << sum;
}