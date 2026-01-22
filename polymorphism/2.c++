#include<iostream>
using namespace std;
//base class
class A //Abstract class
{

	public:
		virtual void print()=0;// pure virtual function
};
//derived class
class B:public A //derived class becomes abstract class
{
	//derived class inherits all the properties from base class
	//internally
	//public:
	//virtual void print()=0;//pure virtual function

};
int main()
{
	//A a1;// invalid,you cannot create object for abstract class
	A *ptr;
	B b1;//invalid,you cannot create object for abstract class
	ptr=&b1;
	ptr->print();
}

