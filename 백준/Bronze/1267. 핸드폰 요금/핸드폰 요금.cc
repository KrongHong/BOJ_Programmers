#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int callTime;
	int M, Y;
	int MSum = 0, YSum = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> callTime;
		Y = (callTime / 30) * 10 + 10;
		M = (callTime / 60) * 15 + 15;

		YSum += Y;
		MSum += M;
	}

	if (MSum > YSum)
	{
		cout << "Y " << YSum;
	}
	else if (MSum < YSum)
	{
		cout << "M " << MSum;
	}
	else
	{
		cout << "Y " << "M " << YSum;
	}
}