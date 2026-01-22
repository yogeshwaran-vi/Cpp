//function overloading
#include<iostream>
using namespace std;
void sum(int a)
{
	cout<<"sum func is called from int"<<endl;
	cout<<"a="<<a<<endl;
}
void sum(double a)
{
	cout<<"sum func is called from double"<<endl;
	cout<<"a="<<a<<endl;
}
int main()
{
	double x=10;
	sum(x);
}
