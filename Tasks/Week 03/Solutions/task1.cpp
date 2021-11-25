#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int number, n;
    cout << "Broi elementi:";
    cin >> number;
    int min = INT_MIN;
    for (int i = 0; i < number; i++)
    {
        cout << "chislo:";
        cin >> n;
        if (n<0 && n>min)
        {
            min = n;
        }
    }
    cout << n << endl;
  
}
