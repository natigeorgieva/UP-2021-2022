#include <iostream>
using namespace std;
int main()
{
    double length, width;
    double P, S;
    cout << "length=";
    cin >> length;
    cout << "width=";
    cin >> width;
    P = 2 * (length + width);
    cout << "Perimeter=" << P << endl;
    S = length * width;
    cout << "Area=" << S << endl;
    return 0;
}
