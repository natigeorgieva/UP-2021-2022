if конструкции (if-statement)

Контролирането потока на програмата, взимането на решение кога дадени фрагменти да се изпълнят и кога не, е важно умение за всеки програмист. За това умение се използват различни инструменти. Един такъв инструмент е условният оператор, той проверява дали дадено условие е изпълнено и спрямо този резултат изпълнява зададено следствие от програмистта. Условният оператор има две основни конструкции(форми): кратка и пълна.

Кратка форма на if

Блок-схема

![title](https://github.com/natigeorgieva/UP-2017-2018/blob/master/Theory/diagrams/if.png)


Синтаксис:

if (<булев_израз>)

{

    // ...

    // блок от операции, които ще бъдат изпълнени

    // ...

}

Семантика: Проверява се резултатът от <булев_израз>, ако върнатата стойност е true тогава се изпълнява блокът от операции, ако върнатият резултат е false блокът се пропуска, т.е. няма да се изпълни нищо.



    #include <iostream>

    using namespace std;

    int main()

    {
    
        const int ALLOW_AGE = 18;
    
        int age = 16;
    
        if (age < ALLOW_AGE) 
    	
        cout << "Drink denied" << endl;
    
    return 0;

    }


Пълна форма на if

Блок-схема

![title](https://github.com/natigeorgieva/UP-2017-2018/blob/master/Theory/diagrams/if-else.png)


Синтаксис:

if (<булев_израз>)

{

    // ...

    // блок от операции, които ще бъдат изпълнени

    // ...

}

else

{

    // ...

    // блок от операции, които ще бъдат изпълнени 

}

Семантика: Проверява се резултатът от <булев_израз>, ако върнатата стойност е true тогава се изпълнява първият блок от операции, ако върнатият резултат е false - вторият блок.



    #include<iostream>

    using namespace std;
    
    int main()

    {
    
    const int ALLOW_AGE = 18;
    
    int age = 16;
    
    if (age < ALLOW_AGE)
    
    { 
    	
        cout << "Drink denied" << endl;
    }
    
    else
    
    {
    
        cout << "Drink permitted" << endl;
    } 
    
    return 0;

    }



Вложена форма(Nested form)



    #include<iostream>

    using namespace std;

    int main()

    {
    
    int number = 15;

    if (number % 3 == 0)
    
    {
    
        if (!(number % 5))
    	
            cout << "Divided by 3 and 5" << endl;
    	
        else
    	
            cout << "Divided by 3 but not by 5" << endl;
    }
    
    return 0;

    }   

Други форми - if-else-if

Синтаксис и семантика:

if ( <булев_израз> ) 

{

    // ...

  	// Ако <булев_израз> е оценен с true, ще се изпълни този блок с операции

  	// ...

}

else if ( <другбулевизраз> ) 

{

  	// ...

  	// Ако <другбулевизраз> е оценен с true И <булев_израз> е оценен с false, 

  	// тогава ще се изпълни този блок с операции

  	// ...

}

else // тази клауза не е задължителна

{

  	// ...

  	// ще се изпълни този блок, ако <булевизраз> И <другбулев_израз> са оценени с false

  	// ...

}



    #include<iostream>

    using namespace std;

    int main()

    {
    
    int a = 19;
        
    if (a % 2 == 0)
    
    {
    
        cout << "divided by 2" << endl;
    
    }
    
    else if (a % 3 == 0)
    
    {
    
        cout << "divided by 3" << endl;
    
    }
    else
    
    {
    
        cout << "Not divided by 2 and 3" << endl;
    
    }
    
    return 0;

    }
