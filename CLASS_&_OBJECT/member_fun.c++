#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		char a;
	void setdata()
	{
		cin>>x>>a;
		cout<<"complete"<<endl;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"a="<<a<<endl;
	}
};
int main()
{
	A ob1,ob2;
	cout<<"Enter the value and integer"<<endl;
	ob1.setdata();
	cout<<"Enter the value and integer"<<endl;
	ob2.setdata();
	cout<<"printing Data 1"<<endl;
	ob1.print();
	cout<<"printing Data 2"<<endl;
	ob2.print();

}
