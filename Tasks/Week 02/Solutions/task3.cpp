#include <iostream>
using namespace std;
int main()
{	
	int number;
	int factorial = 1;
	cout << "number:";
	cin >> number;
	if (number == 0)
	{
		cout << "factorial:" << factorial << endl;
		return 0;
	}
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}
	cout << "factorial:" << factorial << endl;
}