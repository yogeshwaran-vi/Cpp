//normal class
#include<iostream>
using namespace std;
class A
{
	public:
	int a[5];// data member 
	int i;// data member 
	public:
	void setdata()
	{

		cout<<"enter the  integer  elements"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}
	void print()
	{
		cout<<"display the integer elements"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
	}
};
class B
{
	public:
	float a[5];// data member 
	int i;
	public:
	void setdata()
	{
		cout<<"enter the float elements"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}
	void print()
	{
		cout<<"display the float elements"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
	}
};
int main()
{
	A ob1;
	ob1.setdata();
	ob1.print();
	B ob2;
	ob2.setdata();
	ob2.print();
}
