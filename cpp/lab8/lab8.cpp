//Program to find area of square,rectangle and triangle by function over loading
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<math.h>


using namespace std;

class func
{float a,b,c,s,side,length,breadth;
float ar;
public:void area(float a,float b,float c)
	{
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	}
	void area(float side)
	{
	ar=side*side;
	}
	void area(float length,float breadth)
	{
	
	ar=length*breadth;
	}
	void disp()
	{
	cout<<"Area is "<<ar<<" sq units\n";
	}
        	
};

int main(){
int op;
float A,B,C,sid,l,b;
func ob;
while(1)
{cout<<"________________________________-MENU-_________________________________\nChoose one option\n1.Square\n2.Triangle\n3.Rectangle\n4.Exit\n";
cin>>op;
switch (op)
{case 1:cout<<"Enter the length of one side of square\n";
	cin>>sid;
	ob.area(sid);
	ob.disp();
	break;
case 2:cout<<"Enter the sides of the triangle\n";
	cin>>A>>B>>C;
	ob.area(A,B,C);
	ob.disp();
	break;
	
case 3:cout<<"Enter the length and breadth\n";
	cin>>l>>b;
	ob.area(l,b);
	ob.disp();
	break;
case 4:cout<<"Thank you";
	exit(0);
default:cout<<"invalid option\n";

}}
return 0;
}
