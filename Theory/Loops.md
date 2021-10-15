Цикли(Loops)

Да предположим, че ваш приятел ви моли да му напишете програма, която извежда първите 10 цели числа по-големи от дадено число х. Какво ще направите? Използвайки, математическо мислене стигаме до тук:

            #include <iostream>
            using namespace std;
            
            int main()
            {
            	int x;
            
            	cout << "X= ";
    		cin >> x;
    
    		cout << x + 1 << endl;
    		cout << x + 2 << endl
    		cout << x + 3 << endl
    		cout << x + 4 << endl
    		cout << x + 5 << endl
    		cout << x + 6 << endl
    		cout << x + 7 << endl
    		cout << x + 8 << endl
    		cout << x + 9 << endl
    		cout << x + 10 << endl
           
           		return 0;
           }

Обаче, приятелят ви се е объркал. Искал е да са 10, ама 10 хиляди. Е, в такъв случай може отново да изберете горния подход..хаха нали..:D..ще отнеме цяла вечност и ще пишете едно и също 10 000 пъти, с изключение на това че, се сменя само едно число. Да - тъпо и неефективно. Е, какво да правим тогава? Забелязваме, че е налице повторение на един и същ оператор, докато не се наруши дадено условие. А това показва, че имаме цикличност или още цикъл(loop).

Всеки цикъл се състой от 4 основни части:

инициализация(initialization)

Задава се начална стойност на някои променливи, който участват в цикъла. Нарича се още корекция.

тяло на цикъла(body)

Това е блок, който съдържа операторите, които искаме да се повтарят многократно.

актуализация(update)

Обновяват се стойностите на някои от участващите променливи с цел подготовка за следващо изпълнение на тялото.

условие за край на цикъла(condition)

Служи за гарантиране прекратяването на цикъла(иначе ще се повтаря "безкрайно").

Едно изпълнение на тялото на цикъла се нарича итерация(iteration).

Цикли с предусловие

Циклите с предусловие представляват инструмент, с помощта на когото може да се изпълният дадени действия множество пъти, като преди това се провери дали е изпълнени дадено условие. Ще разгледаме две конструкции с такъв замисъл – for и while.


for конструкция(for statement)

Блок-схема

![title](https://github.com/natigeorgieva/UP-2017-2018/blob/master/Theory/diagrams/for.png)


Синтаксис:

    for ( <инициализация>; <условие-за-край>; <актуализация> )
    {
    	<тяло-на-цикъла>
    }

Семантика: Изпълнението започва с инициализирането на стойностти, след което се проверява условието за край, ако то върне резултат true, то се изпълнява тялото на цикъла, след което се изпълняват операциите в актуализация. След това всичко продължава от проверката на условие за край и така, докато това условие върне false и се прекратява изпълнението, продължавайки изпълнението на кода след for конструкцията.


Пример: Отпечатване на числата от 0 до 9

    #include<iostream>
    using namespace std;
    int main()
    {
    	for (int index = 0; index < 10; index++)
    		cout << index << " ";
    
    	return 0;
    }

While конструкция(while statement)

Блок-схема

![title](https://github.com/natigeorgieva/UP-2017-2018/blob/master/Theory/diagrams/while.png)


Синтаксис:

    while (<условие-за-край-булев-израз>)
    {
    	<тяло-на-цикъла>
    }

Семантика: Проверява се резултатът от <условие-за-край-булев-израз>, ако върнатата стойност е true тогава се изпълнява <тяло-на-цикъла>, ако върнатият резултат е false - се прекратява изпълнението на while оператора и продължава изпълнението на кода след него. Някъде в тялото на цикъла трябва да има актуализация, в противен случай ще стигнем до безкраен цикъл.

Пример: Отпечатване на числата от 0 до 9

    #include<iostream>
    using namespace std;
    int main()
    {
    	int index = 0;
    
    	while (index < 10)
    	{	
    		cout << index << " ";
    		index = index + 1; // eq ++index;	
    	}
    
    	return 0;
    }

Цикли със следусловие

При този вид цикли замисълът е следният: да се изпълни първо тялото на конструкцията и след това да се проверя условието за край. Разликата между двете философии (предусловие и следусловие) е, че при втората винаги ще се изпълни тялото поне веднъж, а при първата е възможно да не се извърши дори един път.

do-while конструкция(do-while statement)

Блок-схема

![title](https://github.com/natigeorgieva/UP-2017-2018/blob/master/Theory/diagrams/do-while.png)

Синтаксис:

    do
    {
    	<тяло-на-конструкцията>
    }
    while (<условие-за-край-булев-израз>);

ОБЪРНЕТЕ ВНИМАНИЕ НА ; СЛЕД WHILE !!!

Семантика: Изпълнява се първо тялото на конструкцията, след което се проверява <условие-за-край-булев-израз>, ако върнатият резултат е true се изпълнява отново тялото на конструкцията в противен случай се прекратява изпълнението на конструкцията.

Пример: Отпечатване на числата от 0 до 9


	#include <iostream>
            
	using namespace std;
	
	int main()
	{
	
	int index = 0;
	
	do
	{
		cout << index << " ";
		index++; 		
	} 
	while (index < 10);
	

	return 0;
}

Вложени цикли (Nested loops)

Когато в тялото на кои да е цикъл се съдържа друг цикъл, казваме че имаме вложени цикли(nested loops). Най-често се използват, когато работим с таблици от числа(матрици). Можем да влагаме колкото цикли пожелаем. Когато имаме само 2 цикъла, единият се нарича външен, а другия вътрешен. Moже вложените цикли да са с различни конструкции.

Пример: Отпечатване на числата от 1 до 9 в решетка




	#include <iostream>
        
	using namespace std;
	
	int main()
	{
	int k = 1;

	for (int i = 0; i < 3; i++) // външен

	{
	
		for (int j = 0; j < 3; j++) // вътрешен
		
		{
		
			cout << k ;
			
			k++;
		
		}
		
		cout << endl;
	
	}

	return 0;

	}