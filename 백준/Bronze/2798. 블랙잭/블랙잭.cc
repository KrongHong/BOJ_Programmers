#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
	int M, N; // N은 카드의 개수, M은 원하는 수
	int sum = 0;
	cin >> N >> M;

	vector<int> arr(N);
	vector<int> max;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	

	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int z =j+1; z < N; z++) {
				sum = arr[i] + arr[j] + arr[z];
				if (sum > M) {
					continue;
				}
				else {
					max.push_back(sum);
				}
			}
		}
		
	}
	sort(max.begin(), max.end());

	cout << max.back();

	return 0;
}