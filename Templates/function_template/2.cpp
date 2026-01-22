//function template
#include<iostream>
using namespace std;
template <typename T>
void sum(T a)
{
	cout<<"sum func is called"<<endl;
	cout<<"a="<<a<<endl;
}
int main()
{
	int x=50;
	sum(x);
	double d=10;
	sum(d);
}
