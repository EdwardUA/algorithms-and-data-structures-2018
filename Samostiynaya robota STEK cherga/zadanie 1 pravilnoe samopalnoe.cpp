#include <stdio.h>
#include <iostream>//http://cppstudio.com/post/5155
#include <iomanip> 
#include <fstream> // dl fail
const int MAX = 1024;
using namespace std;
//Описание функции сортировки простым слиянием
void Simple_Merging_Sort (char *name){
  int a1, a2, k, i, j, kol, tmp;
  FILE *f, *f1, *f2;
  kol = 0;
  if ( (f = fopen(name,"r")) == NULL )
    printf("\nИсходный файл не может быть прочитан...");
  else {
    while ( !feof(f) ) {
      fscanf(f,"%d",&a1);
      kol++;
    }
    fclose(f);
  }
  k = 1;
  while ( k < kol ){
    f = fopen(name,"r");
    f1 = fopen("smsort_1","w");
    f2 = fopen("smsort_2","w");
    if ( !feof(f) ) fscanf(f,"%d",&a1);
    while ( !feof(f) ){
      for ( i = 0; i < k && !feof(f) ; i++ ){
        fprintf(f1,"%d ",a1);
        fscanf(f,"%d",&a1);
      }
      for ( j = 0; j < k && !feof(f) ; j++ ){
        fprintf(f2,"%d ",a1);
        fscanf(f,"%d",&a1);
      }
    }
    fclose(f2);
    fclose(f1);
    fclose(f);

    f = fopen(name,"w");
    f1 = fopen("smsort_1","r");
    f2 = fopen("smsort_2","r");
    if ( !feof(f1) ) fscanf(f1,"%d",&a1);
    if ( !feof(f2) ) fscanf(f2,"%d",&a2);
    while ( !feof(f1) && !feof(f2) ){
      i = 0;
      j = 0;
      while ( i < k && j < k && !feof(f1) && !feof(f2) ) {
        if ( a1 < a2 ) {
          fprintf(f,"%d ",a1);
          fscanf(f1,"%d",&a1);
          i++;
        }
        else {
          fprintf(f,"%d ",a2);
          fscanf(f2,"%d",&a2);
          j++;
        }
      }
      while ( i < k && !feof(f1) ) {
        fprintf(f,"%d ",a1);
        fscanf(f1,"%d",&a1);
        i++;
      }
      while ( j < k && !feof(f2) ) {
        fprintf(f,"%d ",a2);
        fscanf(f2,"%d",&a2);
        j++;
      }
    }
    while ( !feof(f1) ) {
      fprintf(f,"%d ",a1);
      fscanf(f1,"%d",&a1);
    }
    while ( !feof(f2) ) {
      fprintf(f,"%d ",a2);
      fscanf(f2,"%d",&a2);
    }
    fclose(f2);
    fclose(f1);
    fclose(f);
    k *= 2;
  }
  remove("smsort_1");
  remove("smsort_2");
}

int stack[MAX];
int tos=0;   /* вершина стека */

/* Затолкать элемент в стек. */
void push(int i)
{
  if(tos >= MAX) {
    printf("full stek\n");
    return;
  }
  stack[tos] = i;
  tos++;
}

/* Получить верхний элемент стека. */
int pop(void)
{
  tos--;
  if(tos < 0) {
    printf("empy steak\n");
    return 0;
  }
  return stack[tos];
}
  main()
 { int N;
         ofstream fout("zadanie1.txt",ios_base::app);
        cout<<"Skolko chisel"<<endl;
        cin>>N;
         int *ptrarray = new int [N];
 cout<<"Vvedite "<<N<<" chisla"<<endl;
 for(int i =0;i<N;i++)
 {cin>>ptrarray[i];
 fout<<ptrarray[i]<<" ";
 //Zachem sravhnivat elementu gde push()-it esli mojno srazu zapisat v fail
 //i srazu potom vunyt
 }
 fout.close();
         int line[1000];
         int text[1000];
          string filtertext;
     ifstream fin("zadanie1.txt");
     Simple_Merging_Sort ("zadanie1.txt");//srazu sortiroyem vse chisla polzovatela i chto bulo v faile
     cout<<"Fail otsortirovan"<<endl;
     int i =0;
     while (! fin.eof() )
        {fin>>line[i];//vse chisla iz faila
        push(line[i]);
    	cout<<line[i]<<" ";
           cout<<pop(); 
            i++;
        }

fin.close();
     system("pause");
     return 0;
 }
