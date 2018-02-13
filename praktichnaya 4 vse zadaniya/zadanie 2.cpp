#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
//const int N = 0 ;
// binarniy poisk v otsortirovanom masive
int binarySearch(int *arr, int value, int left, int right) {
      int count = 0;
      while (left <= right) { 
                 count++;
            int middle = (left + right) / 2;
            if (arr[middle] == value){
            	cout<<endl<<"Kolichestvo naimenshih voprosov:"<<endl;
                        cout<<count<<endl;
                  return middle;                
}

            else if (arr[middle] > value)
                  right = middle - 1;
            else
                  left = middle + 1;
      }
      return -1;

}
 void Exchange (int i, int j, int *x){
  int tmp;
  tmp = x[i];
  x[i] = x[j];
  x[j] = tmp;
}
void Shell_Sort (int n, int *x){
  int h, i, j;
  for (h = n/2 ; h > 0 ; h = h/2)
    for (i = 0 ; i < n-h ; i++)
      for (j = i ; j >= 0 ; j = j - h)
        if (x[j] > x[j+h]) 
          Exchange (j, j+h, x);
        else j = 0;
}
 
 
 
int main()
{//http://www.cyberforum.ru/cpp-beginners/thread1184391.html  //vzyal za osnovy
 srand(time(NULL));
    //int arr[size] = {1, 3, 5, 6, 7, 9, 12, 34, 78, 102};
    int y;
    int size;
    cout << "Enter integer value: ";
 cin>>size;
    int *arr = new int[size];
    cout<<"Ishodnik"<<endl;
for(int i = 0; i < size; i++)
    {arr[i]=0+rand()%10000;
cout<<arr[i]<<" ";}

Shell_Sort (size, arr);
int b = 0 + rand()%size;

cout<<endl<<"Otfiltrovan dlya binarnogo poiska"<<endl;
for(int i = 0; i < size; i++)cout<<arr[i]<<" ";

y=arr[b];
int index = binarySearch(arr, y, 0, size);
 cout <<"Iskomoe chislo pod indexom = " <<index<< std :: endl;  
  delete arr;
  system("pause");
    return 0;
}
