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
	if (arr[number - 1] % 2 != 0)
		cout << "Not divisible by 6" << endl;
	else {
		int sum = 0;

		for (int i = 0; i < number; i++)
		{
			int current = arr[i];
			while (current != 0)
			{
				sum += current % 10;
				current /= 10;
			}
		}
		if (sum % 3 == 0)
			cout << "Divisible by 6" << endl;
		else cout << "Not divisible by 6" << endl;
	}
}