
public class List {
	private ListElement head;       
	private ListElement tail;       

	void addFirst(int data)           
	{
		ListElement a = new ListElement();  
		a.data = data;               
		
		if(head == null)           
		{                          
			head = a;              
			tail = a;
		}
		else {
			a.next = head;         
			head = a;                
		}
	}

	public void addLast(int data) {         
		ListElement a = new ListElement();  
		a.data = data;
		if (tail == null)           
		{                           
			head = a;               
			tail = a;
		} else {
			tail.next = a;         
			tail = a;               
		}
	}

	void printList()               
	{
		ListElement t = head;         
		while (t != null)           
		{
			System.out.print(t.data + " "); 
			t = t.next;                     
		}
	}

	void removeItem(int data)          
	{
		if(head == null)        
			return;             

		if (head == tail) {    
			head = null;        
			tail = null;
			return;            
		}

		if (head.data == data) {    
			head = head.next;       
			return;                 
		}

		ListElement t = head;      
		while (t.next != null) {    
			if (t.next.data == data) { 
				if(tail == t.next)      
				{
					tail = t;           
				}
				t.next = t.next.next;   
				return;                 
			}
			t = t.next;               
		}


	}

	void removeHead(){
		head =null;
	}
	void removeTail(){
		tail =null;
	}

}

