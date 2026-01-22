#include <iostream>
using namespace std;
struct A
{
	int x; //by defualt public
};
int main()
{
	A obj1,obj2;

	obj1.x=10;
	obj2.x=20;
	cout<<"obj1.x="<<obj1.x<<endl;
	cout<<"obj2.x="<<obj2.x<<endl;
	cout<<"sizeof(obj1)="<<sizeof(obj1)<<endl;
	cout<<"sizeof(obj2)="<<sizeof(obj2)<<endl;
}
