#include <iostream>
using namespace std;
int main()
{
	double x, y;

	cout << "Enter coordinates of a point (x, y): ";
	cin >> x >> y;

	if (x >= 0 && x <= 2 && y >= 0 && y <= 2) {
		cout << "The point is in the square!";
	}
	else {
		cout << "The point isn't in the square!";
	}
}
