#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    int count = 0;
    do {
        cout << "number: ";
        cin >> number;
        if (number % 2 == 0) sum = sum + number;
        else count++;
    } while (number != 0);
    cout << "sum=" << sum << endl;
    cout << "count=" << count << endl;
}
