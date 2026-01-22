#include<iostream>
using namespace std;
template <class T1,class T2>
class A
{
	private:
		T1 a;
		T2 b;
	public:
		A(T1 x,T2 y)
		{
			a=x;
			b=y;
			cout<<"parameterized constructor"<<endl;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		void print();
		void modify();
};
template <class T1,class T2>
void A<T1,T2>::print()
{
	cout<<"before modify"<<endl; 
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
template <class T1,class T2>
void A<T1,T2>::modify()
{
	a*=a;
	b+=b;
	cout<<"after modify"<<endl; 
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
int main()
{
	A <int,float>ob1(20,2.3);
	ob1.print();
	ob1.modify();
}
