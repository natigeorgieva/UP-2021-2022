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
        bool dali = true;

        for (int j = 2; j < arr[i] / 2 && dali == true; j++)
        {
            if (arr[i] % j == 0)
                dali = false;
        }
        if (dali == true && arr[i] != 0 && arr[i] != 1)
            cout << arr[i] << " ";
    }
}
