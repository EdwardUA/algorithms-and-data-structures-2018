#include <iostream.h>
#include <stdlib.h>
 
const int n=5;
 
int c[n] ;   // nomer hoda, na kotorom poseshhaetsja vershina
int path[n]; // nomera poseshhaemyh vershin
int v0=2;    // nachal'naja vershina
 
//Matrica smezhnosti
int a[n][n]=
{
    0,1,1,0,0,
	1,0,0,1,0,
	1,0,0,1,0,
	0,1,1,0,1,
    0,0,1,1,0
};
 
void prnt(void)
{
int p;
        for ( p = 0 ; p<n ; p++)
	 cout<<path[p]+1<<"\t";
	 cout<<path[0]+1 ;
         cout<<"\n" ;
}
 
//podprogramma nahozhdenija gamil'tonova cikla
int gamilton ( int k)
{
int v,q1=0;
    for(v=0; v<n && !q1; v++)
    {
      if(a[v][path[k-1]]||a[path[k-1]][v])
      {
    if (k==n &&  v==v0 ) q1=1;
    else if (c[v]==-1) 
            {
          c[v] = k ; path[k]=v; 
          q1=gamilton (k+1) ;
          if (!q1) c[v]=-1;  
        } else continue;
    } 
    }   return q1;
}
 
int main()
{
int j;
system("CLS");
    cout<<"Gamil'tonov cikl:\n";
        for(j=0;j<n;j++) c[j]=-1;
        path[0]=v0 ;
          c[v0]=v0;
    if(gamilton (1)) prnt(); else cout<<"Net reshenij\n";
    cin.get();
	return 0;
}
