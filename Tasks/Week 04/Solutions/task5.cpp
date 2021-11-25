#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p, q;
	cout << "p="; cin >> p;
	cout << "q="; cin >> q;
	if (p > q)
	{
		int temp = p;
		p = q;
		q = temp;
	}
	for (int i = (p < 1 ? 2 : p); i <= q; i++)
	{
		bool isCurrPrime = true;
		for (int j = 2; j <= sqrt(i) && isCurrPrime; j++)
		{
			if (!(i % j))
			{
				isCurrPrime = false;
			}
		}
		if (isCurrPrime) cout << i << " ";
	}
	
	cout << endl;
}
