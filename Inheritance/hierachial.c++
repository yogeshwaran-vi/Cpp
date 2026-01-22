#include<iostream>
using namespace std;
//base class
class A
{
	public:
		int x;
};
//derived class
class B:public A
{
	public:
		int y;
		
		void setdata()
		{
			cout<<"Enter the x and y value"<<endl;
			cin>>x>>y;
		}
		void add()
		{
			cout<<"add="<<x+y<<endl;
		}
};
class C:public A
{
	public:
		int y;

		void setdata()
		{

			cout<<"Enter the x and y value"<<endl;
			cin>>x>>y;
		}
		void sub()
		{
			cout<<"sub="<<x-y<<endl;
		}
};
class D:public A
{
	public:
		int y;

		void setdata()
		{

			cout<<"Enter the x and y value"<<endl;
			cin>>x>>y;
		}
		void mul()
		{
			cout<<"mul="<<x*y<<endl;
		}
};
int main()
{
	A a1;

	B b1;
	b1.setdata();
	b1.add();
	C c1;
	c1.setdata();
	c1.sub();
	D d1;
	d1.setdata();
	d1.mul();
}
