#include <iostream>
using namespace std;
int main()
{
    int number, a;
    cout << "chislo i stepenen pokazatel:";
    cin >> number >> a;
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * number;
    }
    cout << "number^a=" << result;
}
