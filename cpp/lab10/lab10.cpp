 //Program to find sum 1+x+x^2+...+x^n
#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class series
{int n,x,a,b,s,p,i;
public:series(int a,int b)
	{n=b;
	x=a;}
	void calc()
	{s=1;
	p=1;
	for(i=0;i<n;i++)
	{p=p*x;
	s=s+p;
	
	}}
	void disp()
	{
	cout<<"The sum of series is :\n"<<s;
	}
	
};

int main(){
int a,b;
cout<<"Enter the number and the power :\n";
cin>>a>>b;
series ob1(a,b);
series ob2=ob1;
cout<<"\nNormal object:\n";
ob1.calc();
ob1.disp();
cout<<"\nusing copy constuctor:\n";
ob2.calc();
ob2.disp();


return 0;
}

