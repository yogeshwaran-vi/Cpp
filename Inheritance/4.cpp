#include<iostream>
using namespace std;

class A
{
	public:
	       int x;	       
};
class B:public A
{
	public:
		int y;
};
class C:public B
{
	public:
		int total,z;

		void setdata();
		void add();
		void display();
};
void C::setdata()
{
	cout<<"---------------------------\n";
	cout<<"Enter the x value"<<endl;
	cin>>x;
	cout<<"Enter the y value"<<endl;
	cin>>y;
	cout<<"Enter the z value"<<endl;
	cin>>z;
	cout<<"---------------------------\n";
}
void C::add()
{
	total=x+y+z;
}
void C::display()
{
	cout<<"---------------------------\n";
	cout<<"x     = "<<x<<endl;
	cout<<"y     = "<<y<<endl;
	cout<<"z     = "<<z<<endl;
	cout<<"total = "<<total<<endl;
	cout<<"---------------------------\n";
}
int main()
{
	A a1;
	B b1;
	C c1;
	c1.setdata();
	c1.add();
	c1.display();
	cout<<"sizeof a1 = "<<sizeof(a1)<<endl;
	cout<<"sizeof b1 = "<<sizeof(b1)<<endl;
	cout<<"sizeof c1 = "<<sizeof(c1)<<endl;
}






