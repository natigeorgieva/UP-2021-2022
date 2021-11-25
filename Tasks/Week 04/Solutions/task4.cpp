#include <iostream>
using namespace std;
int main()
{
	int number;
	do {
		cout << "number:";
		cin >> number;
	} while (number < 0 || number>10);
	for (int i = number; i <= 100; i++)
	{
		if (i % 2 == 0 && i % 3 == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}