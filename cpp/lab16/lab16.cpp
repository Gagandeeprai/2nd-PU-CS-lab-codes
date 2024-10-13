//Program to create linked list
#include<iostream>
#include<iomanip>
using namespace std;
class Linklist
{
private:
	struct Node
	{
	int data;
	Node *link;
	}*START;
public:
	Linklist()
	{START=NULL;}
	void Print()
	{
	if(START==NULL)
	cout<<"Linked list is empty\n";
	else
	{cout<<"Linked list contains:\n";
	Node *temp=START;
	while(temp!=NULL)
	{cout<<temp->data<<" ";
	temp=temp->link;}}
	}
	void Append(int num)
	{
	Node *newNode;
	newNode= new Node;
	newNode->data=num;
	newNode->link=NULL;
	
	if(START==NULL)
	{START=newNode;
	cout<<endl<<num<<" is inserted as the first node\n";
	}
	else
	{
	Node *temp=START;
	while(temp->link!=NULL)
	temp=temp->link;
	temp->link=newNode;
	cout<<'\n'<<num<<" is inserted\n";
	}}
	void Count()
	{
	Node *temp;
	int c=0;
	for(temp=START;temp!=NULL;temp=temp->link)
	c++;
	cout<<"\n No of nodes in the linked list:"<<c<<"\n";
	
	}
};
int main()
{
Linklist *obj=new Linklist();
obj->Print();
obj->Append(100);
obj->Print();
obj->Count();

obj->Append(200);
obj->Print();
obj->Count();

obj->Append(300);
obj->Print();
obj->Count();
}
