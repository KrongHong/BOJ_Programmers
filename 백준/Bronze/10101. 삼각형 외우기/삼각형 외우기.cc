#include <iostream>

using namespace std;

int main() {
	int ang1, ang2, ang3;
	
	cin >> ang1 >> ang2 >> ang3;
	int sum = ang1 + ang2 + ang3;

	if (sum == 180) {
		if (ang1 == ang2 && ang2 == ang3) {
			cout << "Equilateral";
		}
		else if (ang1 != ang2 && ang1 != ang3 && ang2 != ang3)
		{
			cout << "Scalene";
		}
		else {
			cout << "Isosceles";
		}
	}
	else {
		cout << "Error";
	}

	return 0;
}