#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;
void Exchange (int i, int j, int *x){
  int tmp;
  tmp = x[i];
  x[i] = x[j];
  x[j] = tmp;
}
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
int main(){
int n,k1,z ;
 
cout << "Kilkistb elementov?   "; 
cin >> n;  //fiks 4islo elementov
    int a[n];
   int b[n] ;
 {srand(time(NULL)); // obyava randoma
for (int i=0; i<n; i++)
{a[i]=rand()%10;   //  rand masiv a
}

for (int i=0; i<n; i++)
{b[n]=rand()%10;   //  rand masiv b
}}
Hoar_Sort (n, a);
Hoar_Sort (n, b);
ofstream file("file_zadanie_2.txt",ios_base::trunc); 
file << "Masiv 1 : ";
for (int i=0; i<n; i++)
{
file << a[i] << " "; 
}
file <<endl;
file << "Masiv 2 : ";
for (int i=0; i<n; i++)
{
file << b[n] << " "; 
}
file <<endl;
cout <<endl;
int k2;
cout<<"\n\n4to vvesti?:"<<"\n"<<"button 1-> C = A _ B  "<<"\n"<<"button 2-> C= A u B  "<<"\n"<<"button 3-> C = A/B  "<<"\n"<<"button 4-> C= A - B  \n\n";
cin>>k2;

switch(k2)
{
case 1:
{file<< "ZADANIE vivesti povtoryvani elementu masivov"<<endl;
for (int i = 0; i<n; i++){
    for (int i2 = 0; i2<n; i2++){
        if (a[i]==b[i2])
        { file<<a[i];} }}}
break;
case 2:
{file <<endl<< "ZADANIE C= A u B:"<<endl; 
for (int i = 0; i<n; i++)
           {file <<a[i];}
     file <<" ";       
for (int j = 0; j<n; j++)
           {
            file <<b[j];}}
            file<<endl;

            
break;
case 3:
{
		file <<endl<<"Zadanie C = A/B:";
for (int i = 0; i<n; i++){ 
    for (int i2 = 0; i2<n; i2++){
        if (a[i]!=b[i2] )
        { file<<a[i];}}	
        file<<endl;
break;
}
case 4:
{
		file <<endl<<"Zadanie C = (A/B) u (B/A):";
for (int i = 0; i<n; i++){ 
    for (int i2 = 0; i2<n; i2++){
        if (a[i]!=b[i2] && b[i2]!=a[i])
        { file<<a[i];}}	
        file<<endl;
break;
}


}
}
file.close();
system("PAUSE");
return 0;
}}

