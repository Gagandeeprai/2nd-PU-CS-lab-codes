//Program for binary search

#include<iostream>
#include<iomanip>
#include<cstdlib>


using namespace std;

class bis
{
int a[100],i,n,j,m,f,e,ele;

public:void read()
	{cout<<"Enter the size of the array:\n";
	cin>>n;
	cout<<"Enter the elements in ascending order:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	}
     void calc()
	{cout<<"Enter the element to search\n";
		cin>>ele;
	f=0;
	e=n-1;
	while(e>=f)
	{m=(f+e)/2;
	if(a[m]==ele)
	{cout<<ele<<" is in the location "<<m<<'\n';
	exit(0);}
	else
	if(a[m]>ele)
	e=m-1;
	else
	f=m+1;}
	cout<<"element is not found\n";
	}
	
};

int main(){
bis ob;
ob.read();
ob.calc();

return 0;
}
