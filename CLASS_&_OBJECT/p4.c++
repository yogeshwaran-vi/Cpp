#include<iostream>
using namespace std;
class A
{
	public:
	int x=10;
	int y=20;
	char ch='A';
};
int main()
{
	A obj1,obj2;
	cout<<"display obj1"<<endl;
	cout<<"obj1.x="<<obj1.x<<endl;
	cout<<"obj1.y="<<obj1.y<<endl;
	cout<<"obj1.ch="<<obj1.ch<<endl;
	cout<<"sizeof(obj1)"<<sizeof(obj1)<<endl;
	cout<<"display obj2"<<endl;
	cout<<"obj2.x="<<obj2.x<<endl;
	cout<<"obj2.y="<<obj2.y<<endl;
	cout<<"obj2.ch="<<obj2.ch<<endl;
	cout<<"sizeof(obj2)"<<sizeof(obj2)<<endl;
}
