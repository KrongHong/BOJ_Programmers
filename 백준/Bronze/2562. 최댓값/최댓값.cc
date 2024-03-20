#include <iostream>

using namespace std;

int main()
{
	int numArr[9];
	int max = numArr[0];
	int maxSq;

	for (int i = 0; i < 9; i++)
	{
		cin >> numArr[i];

		if (max < numArr[i])
		{
			max = numArr[i];
			maxSq = (i + 1);
		}
	}

	cout << max << endl;
	cout << maxSq;
}