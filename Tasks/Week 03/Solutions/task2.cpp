#include <iostream>
using namespace std;
int main()
{
    int first = 0, second = 1, after, number;
    cout << "number:";
    cin >> number;
    if (number == first)
    {
        cout << first << endl;
    }
    else if (number == second)
    {
        cout << second << endl;
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            after = first + second;
            first = second;
            second = after;
        }
    }
    cout << after << endl;
}