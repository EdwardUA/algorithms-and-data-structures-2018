#include <string>
#include <iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
using namespace std; 

const int N=100000;
 int sortb(int *A,int n) 
{	            
        int i, j;
        for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        if (A[j] < A[i])
        {
        int buff;
        buff = A[i];
        A[i] = A[j];
        A[j] = buff;
    }
}

 main()
{
srand(time(NULL));
int m[N];
    for(int i = 0; i < N; i++) {
                m[i]=rand()%1000;//esli 6olbIII,e to ochen dolhgo
                     cout<<m[i]<<" " ;
            }
cout<<"\n" ;
    

  clock_t t, f ;
  printf ("Calculating...\n");
   f = clock();
  sortb( m, N) ;
  printf ("The number of primes lower than 100,000 is: %d\n",f);
  t = clock() - f;
  cout<<"sorting \n" ;
  for(int i = 0; i < N; i++)
    cout<<m[i]<<" ";
    cout<<endl;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);   
    system("pause");
    return 0;
    
    
    
   

}
