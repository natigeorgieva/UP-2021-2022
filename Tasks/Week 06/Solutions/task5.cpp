#include <iostream>
using namespace std;
int main()
{
    const int max_size = 100;
    int number;
    int arr[max_size];
    do {
        cout << "number:";
        cin >> number;
    } while (number < 1 || number>100);
    for (int i = 0; i < number; i++)
    {
        cout << "number elements:";
        cin >> arr[i];
    }
    bool flag = true;

    for (int i = 0; i < number - i - 1 && flag == true; i++)
    {
        if (arr[i] != arr[number - 1 - i])
        flag = false;
    }

    if (flag == true)
        cout << "The number is a palindrome" << endl;
    else cout << "The number is not a palindrome" << endl;
}
