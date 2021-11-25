#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Vuvedete broq redove: ";
    cin >> number;
    if (number < 0)
    {
        number *= -1;
    }
    int counter = 1;
    for (int i = 0; i < number; i++)
    {
        for (int j=0; j <= i; j++, counter++)
        {
            cout << counter << " ";
        }
        cout << endl;
    }
}

