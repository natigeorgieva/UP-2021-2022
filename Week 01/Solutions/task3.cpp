#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double radius, height;
    double V, L, B, A, S;
    double PI = 3.14;
    cout << "radius=";
    cin >> radius;
    cout << "height=";
    cin >> height;

    V = (1 / 3.0) * PI * pow(radius, 2) * height;
    S = sqrt(pow(radius, 2) + pow(height, 2));
    B = PI * radius * radius;
    L = PI * radius * S;
    A = L + B;

    cout << fixed << setprecision(2) << "V=" << V << endl;
    cout << fixed << setprecision(2) << "B=" << B << endl;
    cout << fixed << setprecision(2) << "L=" << L << endl;
    cout << fixed << setprecision(2) << "A=" << A << endl;

    return 0;

}