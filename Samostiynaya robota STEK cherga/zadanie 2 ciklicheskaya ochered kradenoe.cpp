//http://www.cyberforum.ru/cpp-beginners/thread303866.html
#include <iostream>
using namespace std;
class CycleQ
{
private:
        long* elem;
        int start;
        int end;
        int num;
        int size;
public:
        CycleQ(int size);
        void Put(long val);
        long Take();
};
CycleQ::CycleQ(int sz)
{
       size = sz;
       elem = new long [size];
       start = 0;
       end = 0;
       num = 0;
}
void CycleQ::Put(long val)
{
        if(num<size)
        {
         elem[end] = val;
         if(end+1<size) end++;
         else end = 0;
         num++;
        }
        else cout<<"Queue is full"<<endl;
}
long CycleQ::Take()
{
        if(num>0)
        {
         if(start+1<size)
         {
          start++;
          num--;
          return elem[start-1];
         }
         else
         {
          int p = start;
          start = 0;
          num--;
          return elem[p];
         }
        }
}
int main(int argc, char* argv[])
{
        CycleQ q(3);
        for(int i =0;i<3;i++)
        {
         for(int j=0;j<3;j++)
                q.Put(j);
         for(int j=0;j<3;j++)
                cout<< q.Take()<<endl;
        }
        system("pause");
        return 0;
}
