#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int m;

	cin >> n >> m;
	if (n < 1 && n >100 && m < 1 && m > 100)
	{
		return 0;
	}

	vector<int> backet(n+1);

	for (int x = 0; x < m; x++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		

		for (i; i <= j; i++)
		{
			backet[i] = k;
		}

	}

	for (int i = 1; i <= n; i++)
	{
		cout << backet[i] << " ";
	}
}
