//Program to push and pop an element into stack

#include<iostream>
#include<iomanip>

#include<cstdlib>
using namespace std;
class stack
{
int top,n,ele,a[100];
public:stack()
	{top=-1;}
	void read()
	{
	cout<<"Enter the size of the stack:\n";
	cin>>n;
	
	}
	void push(int ele)
	{if(top==n-1)
	cout<<"Stack is full\n";
	else
	{top=top+1;
	a[top]=ele;
	cout<<ele<<"is pushed into the stack\n";
}
	}
	void pop()
	{if(top==-1)
	cout<<"Stack is empty\n";
	else
	{ele=a[top];
	top--;
	cout<<ele<<"is popped from the stack\n";
	}}
	void disp()
	{if(top==-1)
	cout<<"Stack is empty\n";
	else
	{cout<<"Elements of stack are :\n";
	for(int i=0;i<=top;i++)
	cout<<a[i]<<'\n';
	}}
};


int main(){
int op,ele;
stack ob;
ob.read();
while(1)
{cout<<"_________________________________   -MENU-  ____________________________________\nChoose one option\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
cin>>op;
switch (op)
{case 1:cout<<"Enter the element to be pushed:\n";
	cin>>ele;
		ob.push(ele);
	break;
case 2:ob.pop();
	break;
case 3:ob.disp();
	break;
	
case 4:cout<<"Thank you";
	exit(0);
default:cout<<"invalid option\n";

}}
return 0;
}


