#include<iostream>
using namespace std;
template <class T>
void swp(T &a,T &b)
{
	T temp;
	cout<<"swap func is called"<<endl;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x=10,y=20;
	double d1=55,d2=77;
	cout<<"before swaping"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"d1="<<d1<<endl;
	cout<<"d2="<<d2<<endl;
	swp(x,y);
	swp(d1,d2);
	cout<<"after swaping"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"d1="<<d1<<endl;
	cout<<"d2="<<d2<<endl;
}
