//OBJECT SLICING IN C++
#include<iostream>
using namespace std;
//base class
class Employee
{
	public:
		string name;//data member 
		int sal;//data member 
	public:
		void show()
		{
			cout<<"base class  member function is called"<<endl;
			cout<<"name="<<name<<endl;
			cout<<"salary="<<sal<<endl;
		}
};
//derived class
class Manager:public Employee
{

	//internally
	//public:
	//string name;
	//int sal;
	public:
		int teamsize;
	public:
		void show()
		{
			cout<<"derived class member function is called"<<endl;
			cout<<"name="<<name<<endl;
			cout<<"salary="<<sal<<endl;
			cout<<"teamsize="<<teamsize<<endl;
		}
};
int main()
{
	Manager m1;
	m1.name="gopi";
	m1.sal=1500;
	m1.teamsize=10;
	Employee e1=m1;// object slicing happens  when a derived class object is assigned
	// to a base class object

	e1.show();
	m1.show();
}
