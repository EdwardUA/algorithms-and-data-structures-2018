#include <string>
#include <iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
const int N=100000;
int ShellSort(int a[], int n)
{int i, j, k, temp;
for(i = n/2; i > 0; i = i/2){
for(j = i; j < n; j++)
		{for(k = j-i; k >= 0; k = k-i)
			{if(a[k+i] >= a[k])
				break;
				else
				{temp = a[k];
					a[k] = a[k+i];
					a[k+i] = temp;}}}}}
using namespace std; 
 main(int argc, char **argv)
{int f;
srand(time(NULL));
int m[N];
    for(int i = 0; i < N; i++)
    m[i]=0+rand()%10;//esli 6olbIII,e to ochen dolhgo
  clock_t t;
  printf ("Calculating...\n");
   t = clock();
  f = ShellSort( m, N) ;
  printf ("The number of primes lower than 100,000 is: %d\n",f);
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);   
    system("pause");
    return 0;
    
    
    
   

}

