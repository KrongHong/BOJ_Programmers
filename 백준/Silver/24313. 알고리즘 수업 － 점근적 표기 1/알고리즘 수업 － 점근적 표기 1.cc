#include <iostream>

using namespace std;

int main() {
	int a0, a1, n0 ,c;
	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	int fn = 0;
	fn = a1 * n0 + a0;
	int gn = 0;
	gn = c * n0;

	if (fn <= gn && a1 <= c) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}