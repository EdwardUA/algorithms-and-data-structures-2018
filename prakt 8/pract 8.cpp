#include <iostream>
#include <iostream>
 using namespace std;
/*struct Man     
{                  
char name[300];
int weight;
int height;
}; */
class Node
{
  string value;
  Node* prev, *next;
   
  public:
  Node(string VALUE)
  {
    prev = next = NULL;
    value = VALUE;
  }
   
  Node(Node* PREV, string VALUE)
  {
    prev = PREV;
    prev->next = this;
    next = NULL;
    value = VALUE;
  }
   
  ~Node()
  {
    if(prev != NULL)
      prev->next = next;
    if(next != NULL)
      next->prev = prev;
  }
   
  Node* Add(string VALUE)
  {
    next = new Node(this, VALUE);
    return prev;
  }
   
  string ShowList()
  {
  cout << value << ' ';
    if(next != NULL)
      next->ShowList();
  }
   
  Node* GetPrev()
  {
    return prev;
  }
   
  Node* GetNext()
  {
    return next;
  }
};
 
main()
{
  Node* Begin = NULL, *End = NULL, *Temp;
  int option;
  int i;
   

    
    cout << "\n1 - Put end\n2 - Del in first place\n3 - Exit\nI choose my destiny: ";
    
    string value;
  do{cin >> option;
           switch(option)
    {
      case '1':
      {
        cout << "Putin value: ";
         cin>>value;
       if(End != NULL)
        {
          Temp = new Node(End, value);
          End = Temp;
        }
        else
          Begin = End = new Node(value);
      }break;
       
      case '2':
      {
        if(Begin != NULL)
        {
          Temp = Begin->GetNext();
          delete Begin;
          Begin = Temp;
          if(Begin == NULL)
            End = NULL;
        }
      }break;

    }
           
           
           } while(option != '3'); 
    
     
     
  system("pause");
}
