#include <iostream>
using namespace std;
int main()
{
    int number; //числото до което ще търсим сумата
    cout << "number:";
    cin >> number;
    int sum = 0; // тук ще трупаме сумата, като в началото е хубаво да я направим 0, за да имаме правилен отговр накрая
    
    // ще обжоцдаме всички числа от 10 до въведеното ни
    for (int i = 10; i < number; i++)
    {
        sum = sum + i; // може още да се запише sum+=i;
    }
    cout << "sum=" << sum;
    return 0;
}