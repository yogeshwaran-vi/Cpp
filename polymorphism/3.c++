#include<iostream>
using namespace std;
//base class
class A //Abstract class
{

	public:
		virtual void print()=0;// pure virtual function
};
//derived class
class B:public  A 
{
	public:
		void print()
		{
			cout<<"derived class member function is called"<<endl;
		}


};
int main()
{
	B *ptr;
	A a1;///invalid,you cannot create object for abstract class 
	ptr=&a1; //invalid,derived class pointer unable to hold base class object address
	ptr->print();
}

