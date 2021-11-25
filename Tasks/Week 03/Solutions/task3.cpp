#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "number:";
	cin >> number;
	int sum=0;
	bool t = true;
	for (int i = 0; i < number; i++)
	{
		int p;
		cin >> p;
		if (p != 0 && t == true)
		{
			sum = sum + p;
		}
		else t = false;
	}
	cout << "suma=" << sum;
}