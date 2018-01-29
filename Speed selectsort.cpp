#include <string>
#include <iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
const int N=100000;
int selectSort(int arr[], int n)
{int pos_min,temp;
	for (int i=0; i < n-1; i++)
	{pos_min = i;//set pos_min to the current index of array
		for (int j=i+1; j < n; j++)
		{if (arr[j] < arr[pos_min])
                   pos_min=j;}
            if (pos_min != i)
            {temp = arr[i];
                 arr[i] = arr[pos_min];
                 arr[pos_min] = temp;}}}
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
  f = selectSort( m, N) ;
  printf ("The number of primes lower than 100,000 is: %d\n",f);
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);   
    system("pause");
    return 0;
    
    
    
   

}

