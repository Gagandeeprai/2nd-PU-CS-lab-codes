//Program to show the use of single inheritance

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class base
{
public:int rollno,m1,m2;
	char name[20];
	void read()
	{
	cout<<"Enter the name of the student:\n";
	cin.getline(name,20);
	cout<<"Enter the roll no:\n";
	cin>>rollno;
	
	
	}
void disp()
{cout<<"Name:"<<name;
cout<<"\nRollno:"<<rollno;
}};

class derv:public base
{public:void read1()
	{cout<<"Enter the marks of 2 subjects:\n";
	cin>>m1>>m2;}
	
	void disp1()
{cout<<"\nTotal marks:"<<m1+m2<<"\nAverage:"<<(m1+m2)/2;}
};

int main(){
derv ob;
ob.read();
ob.read1();
ob.disp();
ob.disp1();
return 0;
}

