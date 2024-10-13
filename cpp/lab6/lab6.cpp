//Program for quadratic equations

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<math.h>


using namespace std;

class quad
{
int a,b,c,x;
public:void read()
{
cout<<"Enter the coefficient of x^2,x and constant :\n";
cin>>a>>b>>c;
}
void calc()
{int d=b*b-4*a*c;
if(d>0)
{
cout<<"The roots are real and distinct they are :\n";
cout<<((-b+sqrt(d))/(2*a))<<"\n"<<((-b-sqrt(d))/(2*a))<<'\n';
}
else
if(d==0)
{cout<<"the roots are real and equal\n";
cout<<(-b/(2*a))<<'\n';
}
else
cout<<"The roots are imaginary";
}	
};

int main(){
quad ob;
ob.read();
ob.calc();

return 0;
}
