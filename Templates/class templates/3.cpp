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
		void print()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int main()
{
	A <int,float>ob1(20,2.3);
	ob1.print();
}
