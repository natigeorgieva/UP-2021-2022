#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "number:";
    cin >> number;

    if (number % 2 == 0 && number % 3 == 0 && number % 5 == 0)
    {
        cout << "The number is divisible by 2 and 3 and 5!\n";
    }

    else
        cout << "The number isn't divisible by 2 and 3 and 5!\n";

}