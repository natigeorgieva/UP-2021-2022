#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "number:";
    cin >> number;
	int sum = 0;
	int lastDigit = 0;
	while (number != 0)
	{
		lastDigit = number % 10;
		//Разглеждаме последната цифра

		if (lastDigit % 2 == 1)
		{
			sum += lastDigit;
		}
		number /= 10;
		//Премахваме последната цифра и така докато се изчерпат
	}
	cout << sum;

    return 0;
}