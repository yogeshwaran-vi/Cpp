#include<iostream>
using namespace std;
class A
{
	public:
		int x;
	A():x(10)
	{
		cout<<"base class of -A is default constructor"<<endl;
	    	cout<<"x="<<x<<endl;	
	}
	~A()
	{
		cout<<"base class of -A destructor"<<endl;
	}
};
class B:public A
{
	public:
		int y;
	B():y(20)
	{
		cout<<"base class of -B is default constructor"<<endl;
	    	cout<<"y="<<y<<endl;	
	}
	~B()
	{
		cout<<"base class of -B destructor"<<endl;
	}
};
int main()
{
	A ob;
}
