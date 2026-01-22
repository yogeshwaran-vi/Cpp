#include<iostream>
using namespace std;

class student
{
	public:
		char name[20],roll_no[10];
};

class sub:public student
{
	public:
		int math,phy,chem;
};

class sports
{
	public:
		int s;
};

class info:public sub,public sports
{
	public:
		int total,avarage;
		void setdata()
		{
			cout<<"---------------------------------------"<<endl;
			cout<<"Enter the student details"<<endl;
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the roll_num"<<endl;
			cin>>roll_no;
			cout<<"Enter the maths mark"<<endl;
			cin>>math;
			cout<<"Enter the physics mark"<<endl;
			cin>>phy;
			cout<<"Enter the chemistry mark"<<endl;
			cin>>chem;
			cout<<"Enter the sports mark"<<endl;
			cin>>s;
			cout<<"---------------------------------------"<<endl;
		}
		void cal()
		{
			total=math+phy+chem+s;
			avarage=total/4;
		}	
		void output()
		{
			cout<<"---------------------------------------"<<endl;
			cout<<"Name     :"<<name<<endl;
			cout<<"Roll No  :"<<roll_no<<endl;
			cout<<"maths    :"<<math<<endl;
			cout<<"physics  :"<<phy<<endl;
			cout<<"chemistry:"<<chem<<endl;
			cout<<"sports   :"<<s<<endl;
			cout<<"total    :"<<total<<endl;
			cout<<"avarage  :"<<avarage<<endl;
			cout<<"---------------------------------------"<<endl;
		}
};
int main()
{
	student s1;
	sub s2;
	sports s3;
	info ob1;
	ob1.setdata();
	ob1.cal();
	ob1.output();
}
