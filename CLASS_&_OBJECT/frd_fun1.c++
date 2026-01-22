#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		char y;
	public:
		void print();
		void setdata();
};
void A::setdata()
{
	cin>>x>>y;
}
void A::print()
{
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}
int main()
{
	A ob1,ob2;
	cout<<"Enter the data1"<<endl;
	ob1.setdata();
	cout<<"Enter the data2"<<endl;
	ob2.setdata();
	cout<<"print the data3"<<endl;
	ob1.print();
	cout<<"print the data4"<<endl;
	ob2.print();
}
