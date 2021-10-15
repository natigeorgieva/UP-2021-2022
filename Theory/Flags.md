Помощни флагове (flags)

Освен break, можем да използваме помощни флагове(flags). Такава променлива(flag) служи да маркира промяната на някакво условие, като сменя стойността си от 0 на 1 и обратното. Да, добре е флаговете да са от тип bool.



	#include <iostream>
	
	using namespace std;

	int main()

	{
	
	int temp_number;
	
	int size_of_sequence;
	
	bool flag = false; // свалили сме флага

	cin >> size_of_sequence;

	for (int i = 0; i < size_of_sequence && !flag; i++)
	{
	
		cin >> temp_number;
		
		if (temp_number == 7)
		{
		
			cout << "You're lucky! " << endl;
			
			flag = true; // вдигаме флага, така ще прекратим цикъла
		}
	}

	if (flag == false) // уведомяваме потребителя, че не сме намерили 7
		
		cout << "Sorry! :( " << endl;

	return 0;
	
	}
