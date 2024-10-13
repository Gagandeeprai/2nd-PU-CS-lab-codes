//Program to insert to an element in specified position

#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

class ins
{
int a[100],i,n,ele,p;

public:void read()
	{cout<<"Enter the size of the array:\n";
	cin>>n;
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	}
        void calc()
	{cout<<"\nEnter the element to be inserted :\n";
	cin>>ele;
	cout<<"Enter the position :\n";
	cin>>p;
	
	if(p>n)
	{cout<<"invalid position\n";
	exit (0);
	}
	else 
	
	for(i=n;i>=p;i--)
	a[i+1]=a[i];
	
	a[p]=ele;
	n=n+1;
	cout<<ele<<" is inserted at position "<<p<<'\n';
	}
	void disp()
	{
	cout<<"Elements of the array:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<'\t';
	}
};

int main(){

ins ob;
ob.read();
ob.disp();
ob.calc();
ob.disp();
return 0;}
