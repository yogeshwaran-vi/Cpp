#include<iostream>
using namespace std;
class A
{
	protected:
		int x;

	A(int a)
	{
		x=a;
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
	B(int m,int n):A(m)
	{
		y=n;
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
	B ob(10,20);
}
