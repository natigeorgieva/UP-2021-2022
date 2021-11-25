#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "number:";
    cin >> number;
    int result = 0;
    for (int i = 0; i < number; i++)
    {
        result = pow(i, 2) + 3 * i;
        cout << result << " ";
    }
}
