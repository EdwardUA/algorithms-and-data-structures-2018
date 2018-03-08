#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstring>
/*Samopalnaya programa*/
const int MAX = 1024;
using namespace std;
int stack[MAX];
int tos = 0; /* vershina steka */
void push(int i) //zaphat
{
    if (tos >= MAX) {
        printf("full stek\n");
        return;
    }
    stack[tos] = i;
    tos++;
}
int pop(void) //polychit
{
    tos--;
    if (tos < 0) {
        printf("empy steak\n");
        return 0;
    }
    return stack[tos];
}
int size_template_byte(int* Array) //size
{
    const int size_t = sizeof(Array) / sizeof(*Array); //kolvo elementov v steke
}
int size_byte()
{
    return size_template_byte(stack);
}
int size_elements(void)
{
    return tos;
}
void clear() //ydalit ves stek
{
    int i = 0;
    while (i <= MAX) {
        stack[i] = NULL;
        i++;
    }
}

int back(void)
{
    tos--;
    int a = stack[tos];
    push(a);
    return a;
}
int front(void)
{
    int a = stack[0];
    push(a);
    pop();
}


main()
{
int a;
int b;
char ch=0;
cout<<"1- push n\n2- pop \n3- front\n4- back\n5- size\n6- clear\n7- exit "<<endl;	
while (a!=7)
{cout<<"-----------------------------"<<endl;
cin>>a;	
		switch (a)
{
case 1: 
    {cout<<"Vvedite element"<<endl;
	cin>>b;
    push(b);
    break;
     }
case 2: 
    {
	cout<<"element raven "<<pop()<<endl;
	break;
	}
case 3:
	{
	cout<<"Perviy element"<<endl;
	cout<<front()<<endl;
	break;
	}
case 4:
	{cout<<"Posledniy element"<<endl;
	cout<<back()<<endl;
		break;
	}
case 5:
	{
	cout<<"Razmer zarezerviravanogo mesta"<<endl;
		size_byte();
		cout<<"Kolichestvo elementov"<<endl;
		size_elements();
	break;
	}
case 6:
	{cout<<"Stek cleared.\nIts time to regret your actions"<<endl;
	clear();
	break;
	}
default:{
	cout<<"Bye."<<endl;
	return 0;
}

}
}


    system("pause");
    return 0;
}
