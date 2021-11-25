#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "a i b:";
    cin >> a >> b;
    int result = 1;
    if (a > b)
    {
        swap(a, b);
    }
    for (int i = a; i <= b; i++)
    {
        result = result * i;
    }
    cout << result;
    
}