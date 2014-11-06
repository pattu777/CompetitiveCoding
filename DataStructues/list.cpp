// Linked List implementation containing only integers

#include<iosteram>

using namespace std;

struct Node
{
	int info;
	Node* next;
};

class list
{
	Node* head;
  public:
	list(head = NULL;);
	~list();
	void display();
	int length();
	void search(int x);
	void addtoHead(int x);
	void addtoTail(int x);
	void addatNode(int x);
	void removefromHead();
	void removefomTail();
	void deletelist();
	void deleteNode(int x);
	//void deletefromhead()
	//void deletefromrear()
};
		
void list :: display()
{
	Node* tmp = head;
	while(tmp != NULL)
	{
		printf("%d", tmp->info);
		tmp = tmp->next;
	}
}

void list :: length()
{
	int count = 0;
	Node* tmp = head;
	while(tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	printf("Total number of elements is %d", count);
}

void list :: addtoHead(int num)
{

}

void list :: addtoTail(int num)
{

}

void list :: addatNode(int num)
{

}

void list :: removefromHead()
{

}

void list :: removefromTail()
{

}

void list :: deletelist()
{

}

void list :: deleteNode(int num)
{

}


int main()
{
	list ll;
	ll.addtoHead(21);
	ll.addtoHead(43);
	ll.addtoHead(89);
	ll.addtoHead(-23);
	ll.addtoHead(77);
	ll.display();
	return 0;
	//printf("1 - addtoHead\n2 - addtoTail\n3 - addatNode\n4 - deletefromHead\n5 - deletefromTail");
	//printf("6 - Print linked list elements\n 7 - Delete the list\n 8 - Count the number of elements");
	//printf("0 - EXIT")

}

