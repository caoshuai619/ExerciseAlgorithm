#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
//β�巨
void Insert_tail(Node* &head,int data)
{
	Node* temp = head;
	if(head ==NULL)
	{
		Node* newNode = new Node;
		newNode->next =NULL;
		newNode->data = data;
		head = newNode;
		return ;
	}
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	Node* newNode = new Node;
	newNode->next =NULL;
	newNode->data = data;
	temp->next = newNode;
	return;
}


void Insert_head(Node* &head,int data)
{	
	
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	head = newNode;
	
	return ;
}
void Disp(Node* head)
{
	if(head==NULL)
	{
		cout<<"The list is empty!"<<endl;
		return;
	}
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
	return;
}

void Reverse(Node* &head)
{
	if(head ==NULL)
	{
		cout<<"The list is empty!"<<endl;
		return ;
	}
	Node* current = head;
	Node* pre = NULL;
	Node* next =NULL;
	while(current!=NULL)
	{	next = current->next;
		current->next = pre;
		pre = current;
		current = next;
		
	}
	head = pre;
	return;
}
Node* head ;
void Reverse_ByRecursion(Node* tmp)
{	if(head==NULL){ cout<<"The list is empty!"<<endl; return;}
	if(tmp->next ==NULL){
		head = tmp;
		return;
	}
	Reverse_ByRecursion(tmp->next);
	
	Node* next = tmp->next;
	next->next = tmp;
	tmp->next =NULL;
}

int main()
{   
	head =NULL;
	/*
	Insert_tail(head,1);
	Insert_tail(head,2);
	Insert_tail(head,3);
	Disp(head);
	*/
	cout<<"=================="<<endl;
	cout<<"���������ݵĸ���:";
	int number ;
	cin>>number;
	int i=0;
	while(i<number){
		cout<<"����������:";
		int data;
		cin>>data;
	Insert_head(head,data);
	i++;
	}
	cout<<"��ӡ��������:"<<endl;
	Disp(head);
	/*
	cout<<"��תһ������:"<<endl;
	Reverse(head);
	Disp(head);
	*/
	cout<<"��תһ������:"<<endl;
	Reverse_ByRecursion(head);
	cout<<"��ӡ��������:"<<endl;
	Disp(head);
	system("pause");
	return 0;
}
