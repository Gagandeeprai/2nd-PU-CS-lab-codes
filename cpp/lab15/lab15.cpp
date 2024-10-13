//Program to enqueue and dequeue an element into queue

#include<iostream>
#include<iomanip>

#include<cstdlib>
using namespace std;
class queue
{
int rare,n,front,ele,a[100];
public:queue()
	{rare=-1;
	front=-1;}
	void read()
	{
	cout<<"Enter the size of the queue:\n";
	cin>>n;
	
	}
	void enqueue(int ele)
	{if(rare==n-1)
	cout<<"queue is full\n";
	else
	{rare=rare+1;
	a[rare]=ele;
	cout<<ele<<"is enqueued \n";
}
	}
	void dequeue()
	{if(rare==-1)
	cout<<"queue is empty\n";
	else{
	front++;	
	if(front==rare)
	{ele=a[front];
	front=-1;
	rare=-1;}
	else
	{
	ele=a[front];}
	cout<<ele<<"is dequeued \n";
	}}
	void disp()
	{if(rare==-1)
	cout<<"queue is empty\n";
	else
	{cout<<"Elements of queue are :\n";
	for(int i=0;i<=rare;i++)
	cout<<a[i]<<'\n';
	}}
};


int main(){
int op,ele;
queue ob;
ob.read();
while(1)
{cout<<"________________________________-MENU-_________________________________\nChoose one option\n1.enqueue\n2.dequeue\n3.Display\n4.Exit\n";
cin>>op;
switch (op)
{case 1:cout<<"Enter the element to be enqueued:\n";
	cin>>ele;
		ob.enqueue(ele);
	break;
case 2:ob.dequeue();
	break;
case 3:ob.disp();
	break;
	
case 4:cout<<"Thank you";
	exit(0);
default:cout<<"invalid option\n";

}}
return 0;
}



