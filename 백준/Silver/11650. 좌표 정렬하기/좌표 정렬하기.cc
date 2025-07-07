#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector <vector<int>> arr(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	sort(arr.begin(), arr.end());


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}