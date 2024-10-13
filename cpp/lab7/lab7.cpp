//Program for simple interest

#include<iostream>
#include<iomanip>


using namespace std;

class simp
{
float p,t,r,si;
public:void read()
{
cout<<"enter the principal amount,rate of interest,time\n";

cin>>p>>t>>r;
}
void calc()
{si=(p*t*r)/100;
}
void disp()
{cout<<"\nPRINCIPAL AMOUNT:"<<p<<"\nTime :"<<t<<"\nRate of interest :"<<r<<"%"<<"\nSIMPLE INTEREST IS:"<<si;}	
};

int main(){
simp ob;
ob.read();
ob.calc();
ob.disp();
return 0;
}

