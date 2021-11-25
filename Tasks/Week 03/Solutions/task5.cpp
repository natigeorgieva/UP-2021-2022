#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "numer:";
    cin >> number;
    bool t = true;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            t = false;
            break;
        }
    }
    if (t == true)
    {
        cout << "prosto e";
    }
    else
        cout << "ne e prosto";
}
