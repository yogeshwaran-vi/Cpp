//How to avoid OBJECT SLICING IN C++.
#include<iostream>
using namespace std;
//base class
class Employee
{
	public:
		string name;//data member 
		int sal;//data member 
	public:
		virtual void getdetails()
		{
			cout<<"base class member function is called"<<endl;
			cout<<"enter the name.."<<endl;
			cin>>name;
			cout<<"enter the salary"<<endl;
			cin>>sal;
		}
		virtual void show()
		{
			cout<<"base class member function is called"<<endl;
			cout<<"name="<<name<<endl;
			cout<<"sal="<<sal<<endl;
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
		void getdetails()
		{
			cout<<"derived class member function is called"<<endl;
			cout<<"enter the name.."<<endl;
			cin>>name;
			cout<<"enter the salary.."<<endl;
			cin>>sal;
			cout<<"enter the Teamsize"<<endl;
			cin>>teamsize;
		}
		void show()
		{
			cout<<"derived class member function  is called"<<endl;
			cout<<"name="<<name<<endl;
			cout<<"salary="<<sal<<endl;
			cout<<"teamsize="<<teamsize<<endl;
		}


};
int main()
{
	Employee *p1=new Manager;
	p1->getdetails();
	p1->show();

}
