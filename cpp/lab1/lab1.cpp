//Program to find frequency of an element in an array

#include<iostream>
#include<iomanip>
using namespace std;

class freq
{
int a[100],i,n,ele;

public:void read()
	{cout<<"Enter the size of the array:\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	}
        void calc()
	{cout<<"\n Enter the element whose frequency is to be found:\n";
	cin>>ele;
	int count=0;
	for(i=0;i<n;i++)
	if(a[i]==ele)
	count++;
	
	cout<<"frequency of "<<ele<<" is "<<count;
	
	}
	void disp()
	{
	cout<<"Elements of the array :\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<'\t';
	}
};

int main(){

freq ob;
ob.read();
ob.disp();
ob.calc();
return 0;
}



