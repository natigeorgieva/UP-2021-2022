Оператор continue (continue statement)

Докато операторът break предлага удобен и лесен начин за прекратяване на целия цикъл, то операторът continue предлага удобен начин за прекратяване на текущата итерация, т.е. прескача се частта от тялото на цикъла, която се намира след оператора continue. Пример: В редица от 10 числа искаме да преброим броя на числата, които са нечетни



	#include <iostream>

	using namespace std;

	int main()

	{
	
	int temp_number;
	
	int counter = 0;
	
	for (int i = 0; i < 10; i++)
	{
	
		cin >> temp_number;
		
		if (temp_number % 2 == 0)
		
			continue;
		
		counter++;
	}
	
	cout << "Odd numbers are: " << counter << endl;
	
	return 0;
	
	}
