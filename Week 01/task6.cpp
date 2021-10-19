#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;

	cout << "Enter the coeficents of a second degree polynomial (a!=0)";
	cin >> a >> b >> c;

	if (a == 0) {
		cout << "Leading coeficent ca't be 0...";
		return 0; 
	}
	double D = pow(b, 2) - 4 * a * c;

	if (D == 0) {
		cout << "x_1 = x_2 = " << b / (2 * a) << endl;

	}
	else if (D > 0) {
		cout << "x_1 = " << (-b - sqrt(D)) / (2 * a)
			<< "\nx_2 = " << (-b + sqrt(D)) / (2 * a);
	}
	else {
		cout << "No real roots!\n";
	}
}