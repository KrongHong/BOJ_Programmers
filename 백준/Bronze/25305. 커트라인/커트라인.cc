#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; // 응시자
	int k; // 사람 수
	cin >> N >> k;
	vector<int> arr(N);

	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end()); // 오름차순 정렬
	
	cout << arr[N-k];
}