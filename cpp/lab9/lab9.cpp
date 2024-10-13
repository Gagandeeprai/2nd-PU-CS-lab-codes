//Program to find cube of a number using constructor and inline function

#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class cube
{int a,n;
public:cube(int a)
	{
	n=a;
}	
	int calc();
};
inline int cube::calc()
{return n*n*n;
	}
int main(){
int A;
cout<<"Enter any number:\n";
cin>>A;  
cube ob(A);
cout<<"The cube of the no is:"<<ob.calc();


return 0;
}
