#include <string>
#include <iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
const int N=100000;
 int insertionSort(int arr[], int n)
{int i, key, j;
   for (i = 1; i < n; i++)
   {key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {arr[j+1] = arr[j];
           j = j-1;}
       arr[j+1] = key;}}
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
  f = insertionSort( m, N) ;
  printf ("The number of primes lower than 100,000 is: %d\n",f);
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);   
    system("pause");
    return 0;
    
    
    
   

}

