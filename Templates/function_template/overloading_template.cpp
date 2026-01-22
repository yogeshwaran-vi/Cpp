#include<iostream>
using namespace std;
template <class Type>
void sum(Type a)
{
	cout<<"1 sum func is called "<<endl;
	cout<<"x="<<a<<endl;
}
template <class Type>
void sum(Type a,Type b)
{
	cout<<"2 sum func is called "<<endl;
	cout<<"x="<<a<<endl;
	cout<<"y="<<b<<endl;
}
int main()
{
	int x=10,y=20;
	sum(x);
	sum(x,y);
}
