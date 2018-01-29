#include <string>
#include <iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
using namespace std; 
const int N=100000;
int quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
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
  quickSort( m, m[0],m[N]) ;
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
