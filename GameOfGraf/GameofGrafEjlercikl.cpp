
#include <iostream>
//#include <stdlib> http://ci-plus-plus-snachala.ru/?p=992
 using namespace std;
struct Node
{
   int inf;
   Node *next;
};
 
//============================Stack==============================
 
void push(Node *&st,int dat)
{  // Zagruzka chisla v stek
 
   Node *el = new Node;
   el->inf = dat;
   el->next = st;
   st=el;
}
 
int pop(Node *&st)
{       // Izvlechenie iz steka
 
   int value = st->inf;
   Node *temp = st;
   st = st->next;
   delete temp;
 
   return value;
}
 
int peek(Node *st)
{     // Poluchenie chisla bez ego izvlechenija
   return st->inf;
}
 
//==============================================================
 
Node **graph;   // Massiv spiskov smezhnosti
const int vertex = 1; // Pervaja vershina
 
void add(Node*& list,int data)
{  //Dobavlenie smezhnoj vershiny
 
   if(!list){list=new Node;list->inf=data;list->next=0;return;}
 
   Node *temp=list;
   while(temp->next)temp=temp->next;
   Node *elem=new Node;
   elem->inf=data;
   elem->next=NULL;
   temp->next=elem;
}
 
void del(Node* &l,int key)
{ // Udalenie vershiny key iz spiska
 
   if(l->inf==key){Node *tmp=l; l=l->next; delete tmp;}
   else
        {
	 Node *tmp=l;
	 while(tmp)
         {
	    if(tmp->next) // est' sledujushhaja vershina
	       if(tmp->next->inf==key)
                  {  // i ona iskomaja
		     Node *tmp2=tmp->next;
	             tmp->next=tmp->next->next;  
	             delete tmp2;  
	           }
	       tmp=tmp->next;
	 }
   }
}
 
int eiler(Node **gr,int num)
{ // Opredelenie jejlerovosti grafa
 
   int count;
   for(int i=0;i<num;i++)
   {  //prohodim vse vershiny
 
      count=0;
      Node *tmp=gr[i];
 
	 while(tmp)
         {       // schitaem stepen'
            count++;
	    tmp=tmp->next;
         }
      if(count%2==1)return 0; // stepen' nechetnaja
   }
   return 1;   // vse stepeni chetnye
}
 
void eiler_path(Node **gr)
{ //Postroenie cikla
 
   Node *S = NULL;// Stek dlja  projdennyh vershin
   int v=vertex;// 1ja vershina (proizvol'naja)
   int u;
 
   push(S,v); //sohranjaem ee v stek
   while(S)
      {  //poka stek ne pust
	 v = peek(S); // tekushhaja vershina
	 if(!gr[v]){ // esli net incidentnyh reber
	 v=pop(S); cout<<v+1<<"   "; //vyvodim vershinu  (u nas otschet ot 1, pojetomu +1)
      }
     else 
      {
	 u=gr[v]->inf; push(S,u);  //prohodim v sledujushhuju vershinu
	 del(gr[v],u); del(gr[u],v); //udaljaem projdennoe rebro
      }
   }
}
 
int main()
{
 
system("CLS");
	cout<<"Kolichestvo vershin:  "; int n; cin>>n; // Kolichestvo vershin
   int zn;// Tekushhee znachenie
 
   graph=new Node*[n];
   for(int i=0;i<n;i++)graph[i]=NULL;
   for(int i=0;i<n;i++)   // zapolnjaem massiv spiskov
 
	 for(int j=0;j<n;j++)
		 {
	    cin>>zn;
	    if (zn) add(graph[i],j);
	  }
 
		 cout<<"\n\nREZUL''TAT  ";
 
   if(eiler(graph,n))eiler_path(graph);
   else cout<<"Graf ne javljaetsja jejlerovym.";
 
   cout<<endl;
   cin.get();
   cin.get();
   return(0);
 
}
