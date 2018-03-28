#include <stdio.h>
#include <conio.h>
//#include <alloc.h>
#include <string.h>
#include <iostream>
void clrscr()
    {
          system("CLS");
     }
struct spis
 {
   char name[20];
   int zrist;
   int vaga;
   struct spis *prev;
   struct spis *next;
  };
 void create(void);
 void list(spis *);
 void add(void);
 void del(void);
 struct spis *head, *tail;


 main()
 {
   char c;
   while(1)
    {
	  clrscr();
	  puts("1 - Create list ");
	  puts("2 - View list ");
	  puts("3 - Add new struct at the end of list");
	  puts("4 - Exit ");
	  c=getch();

	   switch(c)
	   { case '1':create();break;
	     case '2':list(head);break;
	     case '3':add();break;
	     case '4':return 0;
	     default:puts("Error! Use buttons 1-5");
	   }
      }
   // free(head);
   // getch();
 }

 //++++++++++++++++++++++++++++++++++++++++++++++++++
 void create(void)
  {
    clrscr();
	spis *p,*pred;
	pred=NULL;

	do
	  {
	    p=(spis *)malloc(sizeof(spis));
		printf("\nEnter the name:   ");
		scanf("%s",&p->name);
		printf("Enter zrist:   ");
		scanf("%s",&p->zrist);
		printf("Enter vaga:  ");
		scanf("%d",&p->vaga);

		p->prev=pred;
		if(pred!=NULL)
		 pred->next=p;
		else
		 head=p;

		 pred=p;
		printf("\n Press <esc> for the exit or any key to continue");
	  }
  while(getch()!=27);
    tail=p;
  tail->next=NULL;
 }
 //++++++++++++++++++++++++++++++++++++++++++++++++
void list(spis *p)
 {
   clrscr();
   printf("\n----------------------------------------------------------------------------");
   printf("\n |  Name                                    |       Zrist      |     Vaga  | \n");
   printf("----------------------------------------------------------------------------");
   p=head;

   while (p!=NULL)
    {
	  printf("\n %30s %20s %18d", p->name,p->zrist,p->vaga);
	  p=p->next;
	}
	printf ("\n Press any button for the exit in main menu");
	getch();
 }
 void add(void)
  {
    spis *p,*pn;
	clrscr();
	pn=(spis *)malloc(sizeof(spis));
	printf("\n Enter name:");scanf("%s",&pn->name);
	printf("\n Enter zrist:");scanf("%s",&pn->zrist);
	printf("\n Enter vaga:");scanf("%d",&pn->vaga);
	p=tail; // perehod v konec spiska
	pn->prev=tail; //ustanovka svyzei
	pn->next=NULL;
	p->next=pn;
	tail=pn; //novii konec spiska
 }

 
 
