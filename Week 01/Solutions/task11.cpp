#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x1, y1, x2, y2;

	cout << "Enter x1 = ";
	cin >> x1;
	cout << "Enter y1 = ";
	cin >> y1;
	cout << "Enter x2 = ";
	cin >> x2;
	cout << "Enter y2 = ";
	cin >> y2;

	double dist = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));

	dist = ((int)(dist * 100 + 0.5)) / 100.0;

	cout << "Dist = " << dist << endl;
}