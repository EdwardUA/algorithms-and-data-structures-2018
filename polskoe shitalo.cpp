#include <stdio.h>
#include <iostream>
#include <iomanip> 
using namespace std;
const int MAX = 1024;
int stack[MAX];
int tos=0;   /* vershina steko */
void push(int i)
{if(tos >= MAX) {
    printf("Stek polon\n");
    return;
  }
  stack[tos] = i;
  tos++;
}
int pop(void)
{
  tos--;
  if(tos < 0) {
    printf("Stek pystoi\n");
    return 0;
  }
  return stack[tos];
}
 int main()
 {int a, b;
cin>>a;
cin>>b;
push(a);//vpihnyli v stek
push(b);
     
     while ( !feof(stdin) ) {
         char c = getchar();// polychayem znak dlya vibora
         int x;
         switch (c) {  
            // case '&'://vvodim enter vuhodim 
                // exit(0);
             case '+':{
                a =pop();
                b =pop();
                push(a+b);
                cout<<pop();
                break;}
             case '-': 
                {
               // a =pop();
               // b =pop();
                push(pop()-pop());
                cout<<pop();
				break;}
             case '*':
             	{push(pop()*pop());
                cout<<pop();
                break;}
             case '/':
             	{push(pop()/pop());
                cout<<pop();
				 break;}
           default: 
                 //ungetc(c, stdin);
                // if (scanf("%d", &x) != 1) {
                //     fprintf(stderr, "Can't read integer\n");
                //     return -1;
               //  } else {
              //       push(x);
                // }
                 break;
          }
    }
     system("pause");
     return 0;
 }
