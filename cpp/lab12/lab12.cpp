//Program to get register no,name and fees

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class student
{
int regno;
char name[20];
double fees;
public:void read(){
	cout<<"Enter the name,regno and fees:\n";
	cin.getline(name,20);
	cin>>regno>>fees;
	}
	void disp(){
	cout<<"Name:"<<name<<"\nRegno:"<<regno<<"\nFees:"<<fees;
	}
};


int main(){
student s,*sptr;
sptr=&s;
sptr->read();
sptr->disp();
return 0;
}

