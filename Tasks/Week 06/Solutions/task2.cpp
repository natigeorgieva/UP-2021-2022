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
    for (int i = 0; i < number; i++)
    {
        int current = arr[i] + i;
        for (int j = 0; j < number; j++)
        {
            if (current == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
           
        }
    }
}
