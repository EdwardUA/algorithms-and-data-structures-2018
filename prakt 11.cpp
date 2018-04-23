#include <iostream>
#include <queue> // очередь
#include <stack> // стек
#define N 4
void smezhnost (unsigned int matr_smezhnosti[N][N],unsigned int matr_dostizhimosti[N][N]);
using namespace std;
int main()
{

int aray1 [N][N];
int aray2 [N][N];
int aray3 [N][N];
int aray4 [N][N];
int aray5 [N][N];
//---------- 4 a)
for(int i=0;i<N;i++)
{
        for(int j=0;j<N;j++){cout<<"A1"<<"["<<i<<"]"<<"["<<j<<"]=";
                cin>>aray1[i][j];
                if(aray1[i][j]>1){aray1[i][j]=1;}
        }

}

for(int i=0;i<N;i++)
{
        for(int j=0;j<N;j++){cout<<"A2"<<"["<<i<<"]"<<"["<<j<<"]=";
                cin>>aray2[i][j];
                if(aray2[i][j]>1){aray2[i][j]=1;}
        }

}
//----------4 b)
for(int i=0;i<N;i++)
{for(int j=0;j<N;j++){if(aray1[i][j]==aray2[i][j]){aray3[i][j]=aray2[i][j];
cout<<"A1 obshiye A2"<<"["<<i<<"]"<<"["<<j<<"]="<<aray3[i][j]<<endl;}}}
//----------4 c)
for(int i=0;i<N;i++)
{for(int j=0;j<N;j++){
if(aray1[i][j]!=aray2[i][j])aray4 [i][j]=1;
else if(aray1[i][j]==aray2[i][j] && aray1[i][j]==1 && aray2[i][j]==1)
aray4 [i][j]=1;
else aray4 [i][j]=0;
}}

for(int i=0;i<N;i++)
{for(int j=0;j<N;j++){
cout<<"A1 U A2"<<"["<<i<<"]"<<"["<<j<<"]="<<aray4[i][j]<<endl;}}
//----------5 a)
for(int i=0;i<N;i++)
{for(int j=0;j<N;j++){
cout<<"A1* A2"<<"["<<i<<"]"<<"["<<j<<"]="<<aray1[i][j]*aray2[i][j]<<endl;}}
//----------5 b)
unsigned int matr_smezhnosti[N][N] = {{0, 1, 1, 0}, {0, 0, 0, 0} };
unsigned int matr_dostizhimosti[N][N];
 
    printf ("Matrica smejnosti: \n");
      for (int i=0; i<N; i++)
    {
        for (int j = 0; j < N; j++)
            printf ("%d ", matr_smezhnosti[i][j]);
        printf ("\n");
    }
 
    smezhnost(matr_smezhnosti,matr_dostizhimosti);
 
    printf ("Matrica dostijimosti: \n");
      for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf ("%d ", matr_dostizhimosti[i][j]);
        printf ("\n");
    }
 
    system("Pause");
}
 
void smezhnost (unsigned int matr_smezhnosti[N][N], unsigned int matr_dostizhimosti[N][N])
{
 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matr_dostizhimosti[i][j] = matr_smezhnosti[i][j];
 
    for (int k = 0; k < N; k++)
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
               matr_dostizhimosti[i][j] = (matr_dostizhimosti[i][j] || (matr_dostizhimosti[k][j] && matr_dostizhimosti[i][k]));
}


