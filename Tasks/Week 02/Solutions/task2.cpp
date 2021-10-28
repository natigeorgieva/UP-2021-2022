#include <iostream>
using namespace std;
int main()
{
	int number;
	int sum = 0;
	do {
		cout << "number:";
		cin >> number;
		if (number < 10 || number>99) { cout << "nekorektni danni!"; }
		sum = sum + number;
	} while (sum < 100);
	cout << "sum=" << sum;
	return 0;
}