#include <iostream>
using namespace std;
bool if_skobki(const char * s, int schetchik = 0)// peredaem stroky, prisvaevaem v fynkII,iye schetchik kotoriy bydet stekom
{
    if (schetchik < 0) return false;//obnylyaem

    for(;*s;++s)//ykazatel na stroky s dvigayem po elementam
        {switch(*s)// esli element 's' =  vupolnyaem takyu operaII,iy so stekom 
        {
            case '(': return if_skobki(s+1,schetchik+1);//stroky s podvinyli na element,vpihnyli v stek virtyalbnyy "skobky"
            case ')': return if_skobki(s+1,schetchik-1);//podvinyli na element zabrali z steka znachenie "skobky"
            case '[': return if_skobki(s+1,schetchik+1);
            case ']': return if_skobki(s+1,schetchik-1);
            case '<': return if_skobki(s+1,schetchik+1);
            case '>': return if_skobki(s+1,schetchik-1);
        }}
    return (schetchik == 0);
}

main(int argc, const char * argv[])
{char a[256];
cout<<"primeri:"<<endl;
    cout << if_skobki("(())<><<") << endl;//0
    cout << if_skobki(")(") << endl;//0
    cout << if_skobki("(())(") << endl;//0
    cout << if_skobki("[60*5]*[1-2]*(1)*(2^3)(1242435654)*[8]") << endl;//1
cout<<"Vvedite svoi:"<<endl;
    cin>>a;
     cout << if_skobki(a) << endl;
}
