//Program to push an element into stack

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
{cout<<"________________________________-MENU-_________________________________\nChoose one option\n1.Push\n2.Display\n3.Exit\n";
cin>>op;
switch (op)
{case 1:cout<<"Enter the element to be pushed:\n";
	cin>>ele;
		ob.push(ele);
	break;
case 2:ob.disp();
	break;
	
case 3:cout<<"Thank you";
	exit(0);
default:cout<<"invalid option\n";

}}
return 0;
}

