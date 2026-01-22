#include<iostream>
using namespace std;
class A
{
	private:
		int x;
		char y;
	public:
		friend void print(A &ob4);
		friend void setdata(A &ob3);
};
void setdata(A &ob4)
{
	cin>>ob4.x>>ob4.y;
}
void print(A &ob3)
{
	cout<<"x="<<ob3.x<<endl;
	cout<<"y="<<ob3.y<<endl;
}
int main()
{
	A ob1,ob2;
	cout<<"Enter the data1"<<endl;
	setdata(ob1);
	cout<<"Enter the data2"<<endl;
	setdata(ob2);
	cout<<"print the data1"<<endl;
	print(ob1);
	cout<<"print the data2"<<endl;
	print(ob2);
}
