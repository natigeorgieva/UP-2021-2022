//За да ви работи програмата трябва да закоментирате един от двата варианта!
#include <iostream>
using namespace std;
int main()
{
    /*
    //за сумата:
    int sum = 0;
    int count = 0;
    int temporary = 0;
    for (int i = 100; i < 1000; i++)
    {
        temporary = i;
        do {
            sum += temporary % 10;
            temporary /= 10;
        } while (temporary != 0);
        if (i % sum == 0)
        {
            count++;
        }
    }
    cout << "count:" << count << endl;
    return 0;
    */
    //за произведението:
    int count = 0;
    int product = 1;
    int temporary = 0;
    for (int i = 100; i < 1000; i++)
    {
        temporary = i;
        do {
            product *= temporary % 10;
            temporary /= 10;
        } while (temporary != 0);
        if (product == 0)
        {
            continue;
        }
        if (i % product == 0)
        {
            count++;
        }
    }
    cout << "count:" << count << endl;
    return 0;
}