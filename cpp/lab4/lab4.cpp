//Program for insertion sort

#include<iostream>
#include<iomanip>

using namespace std;

class ins
{
int a[100],i,n,j,temp;

public:void read()
	{cout<<"Enter the size of the array:\n";
	cin>>n;
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	}
     void calc()
	{for(i=1;i<n;i++)
	{j=i;
	while(j>=1)
	{if(a[j]<a[j-1])
	{temp=a[j];
	a[j]=a[j-1];
	a[j-1]=temp;}
	j=j-1;}
	}}
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
cout<<"Before sorting:\n";
ob.disp();
ob.calc();
cout<<"\nAfter sorting:\n";
ob.disp();
return 0;
}
