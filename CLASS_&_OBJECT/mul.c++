#include<iostream>
using namespace std;
class A
{
	private:
		int x;
	public:
		void setdata()
		{
			cin>>x;
		}
		void print()
		{
			cout<<"x="<<x<<endl;
		}
		void mul(A &ob4,A &ob5)
		{
			cout<<"multiplication function is called"<<endl;
			x=ob4.x*ob5.x;
		}
};
int main()
{
	A ob1,ob2,ob3;
	cout<<"Enter the ob1.x data"<<endl;
	ob1.setdata();
	cout<<"Enter the ob2.x data"<<endl;
	ob2.setdata();
	cout<<"display ob1 data"<<endl;
	ob1.print();
	cout<<"display ob2 data"<<endl;
	ob2.print();
	ob3.mul(ob1,ob2);
	cout<<"display the mul value"<<endl;
	ob3.print();
}
