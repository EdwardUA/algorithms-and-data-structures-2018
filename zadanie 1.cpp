#include <string>
#include <iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
using namespace std; 
//-----------------------------------------------------------------------------------(1 piramida)
void Exchange (int i, int j, int *x){
  int tmp;
  tmp = x[i];
  x[i] = x[j];
  x[j] = tmp;
}
void Sifting (int left, int right, int *x){
  int q, p, h;
  q=2*left+1;
  p=q+1;
  if (q <= right){
    if (p <= right && x[p] > x[q]) 
      q = p;
    if (x[left] < x[q]){
      Exchange (left, q, x);
      Sifting(q, right, x);
    }
  }
}
void Build_Pyramid (int k, int r, int *x){
  Sifting(k,r,x);
  if (k > 0)
    Build_Pyramid(k-1,r,x);
}
void Sort_Piramid (int k, int *x){
  Exchange (0,k,x);
  Sifting(0,k-1,x);
  if (k > 1)
    Sort_Piramid(k-1,x);
}
void Binary_Pyramidal_Sort (int k,int *x){
  Build_Pyramid(k/2+1,k-1,x);
  Sort_Piramid(k-1,x);
}
//-----------------------------------------------------------------------------------(2 Shell)
void Shell_Sort (int n, int *x){
  int h, i, j;
  for (h = n/2 ; h > 0 ; h = h/2)
    for (i = 0 ; i < n-h ; i++)
      for (j = i ; j >= 0 ; j = j - h)
        if (x[j] > x[j+h]) 
          Exchange (j, j+h, x);
        else j = 0;
}
//-----------------------------------------------------------------------------------(3 Hoar/Auia sort)
void Quick_Sort(int left, int right, int *x){
  int i, j, m, h;
  i = left;
  j = right;
  m = x[(i+j+1)/2];
  do {
    while (x[i] < m) i++;
    while (x[j] > m) j--;
    if (i <= j) {
      Exchange(i,j,x);
      i++;
      j--;
    }
  } while(i <= j);
  if (left < j) 
    Quick_Sort (left, j, x);
  if (i < right) 
    Quick_Sort (i, right, x);
}
void Hoar_Sort (int k, int *x){
  Quick_Sort (0, k-1, x);
}
//-----------------------------------------------------------------------------------(4 - Merge)
void Merging_Sort (int n, int *x){
  int i, j, k, t, s, Fin1, Fin2;
  int* tmp = new int[n];
  k = 1;
  while (k < n){
    t = 0;
    s = 0;
    while (t+k < n){
      Fin1 = t+k;
      Fin2 = (t+2*k < n ? t+2*k : n);
      i = t; 
      j = Fin1;
      for ( ; i < Fin1 && j < Fin2 ; s++){
        if (x[i] < x[j]) {
          tmp[s] = x[i];
          i++;
        }
        else {
          tmp[s] = x[j];
          j++;
        }
      }
      for ( ; i < Fin1; i++, s++)
        tmp[s] = x[i];
      for ( ; j < Fin2; j++, s++)
        tmp[s] = x[j];
      t = Fin2;
    }
    k *= 2;
    for (s = 0; s < t; s++)
      x[s] = tmp[s];
  }
  delete(tmp);
}
//-----------------------------------------------------------------------------------(Vivod)
void printArr( int arr[], int n )//ykazatel na masiv i skolvo elementov
{
    int i;
    for ( i = 0; i < n; ++i )
        cout<<arr[i]<<" ";
}

 main(int argc, char **argv)
{int f;
int a;
srand(time(NULL));
 int num; 
    cout << "Enter integer value: ";
    cin >> num; 
    int *m = new int[num]; 
cout<<"Ishodnik:"<<endl;
    for(int i = 0; i < num; i++)
    {m[i]=0+rand()%10;
cout<<m[i]<<" ";}
cout<<"\n1- Pyramide sort\n2- Shell \n3- Hoar\n4- Merge (sliyanie)"<<endl;
cin>>a;
 int n = sizeof( m ) / sizeof( *m );//dlya opredileniya right v auia sorte
switch (a)
{
case 1: 
    {Binary_Pyramidal_Sort (num,m);//kolichestvo elementov i YKAZATEL na nazvanie masiva
     printArr(m, num);
     break;
     }
case 2: 
    { Shell_Sort(num,m);
    printArr(m, num);
    break;
	}
case 3:
	{Hoar_Sort(num,m);
    printArr(m, num);
    break;
	}
case 4:
	{ Shell_Sort(num,m);
    printArr(m, num);
    break;
	}
 default:
                {
                 cout<<"Error 404, try reinstall windows."<<endl;
                }
 }
 delete m;
    system("pause");
    return 0;
    
    
    
   

}
