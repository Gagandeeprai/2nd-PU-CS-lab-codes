//Program to delete to an element in specified position

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
	{cout<<"\nEnter the position of element to be deleted:\n";
	cin>>p;
	if(p>=n)
	{cout<<"invalid position\n";
		exit(0);
}
else		
	ele=a[p];
	for(i=p;i<n;i++)
	a[i]=a[i+1];
	n=n-1;
	cout<<ele<<" is deleted from "<<p<<"\n";
	}
	void disp()
	{
	cout<<"Elements of the array are:\n";
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
