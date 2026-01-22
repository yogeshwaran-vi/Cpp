#include<iostream>
using namespace std;
#pragma pack(3)
class A
{
	public:
	int x;
	int y;
	char ch;
};
int main()
{
	A obj1,obj2;
	cout<<"sizeof(obj1)="<<sizeof(obj1)<<endl;
	cout<<"sizeof(obj2)="<<sizeof(obj2)<<endl;
}
