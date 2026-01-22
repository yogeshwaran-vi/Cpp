//function template with multiple parameter
#include<iostream>
using namespace std;
template <typename T1,typename T2>
void add(T1 a,T2 b)
{
	cout<<"add func is called"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<a+b<<endl;
}
int main()
{
	int x=50;
	double d=10;
	add(x,d);
}
