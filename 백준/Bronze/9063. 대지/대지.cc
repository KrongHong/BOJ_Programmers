#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num, x, y;
	int area = 0;
	int x_min = 10001;
	int x_max = -10001;
	int y_min = 10001;
	int y_max = -10001;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		x_min = min(x_min, x);
		x_max = max(x_max, x);
		y_min = min(y_min, y);
		y_max = max(y_max, y);
	}

	area = (y_max - y_min) * (x_max - x_min);

	cout << area;

	return 0;
}