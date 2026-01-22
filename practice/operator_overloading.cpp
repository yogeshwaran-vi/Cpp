#include<iostream>
using namespace std;

class money
{
	public:
		int rupees,p,r,a;
	public:
		money()
		{
			cout<<"Enter the paise"<<endl;
			cin>>p;
			cout<<"Enter the rupees"<<endl;
			cin>>r;
			rupees=p*100+r;
		}
		bool operator<(money &ob3)
		{
			a=rupees<ob3.rupees;
			return a;
		}
		bool operator>(money &ob3)
		{
			a=rupees>ob3.rupees;
			return a;
		}
		bool operator<=(money &ob3)
		{
			a=rupees<=ob3.rupees;
			return a;
		}
		bool operator>=(money &ob3)
		{
			a=rupees>=ob3.rupees;
			return a;
		}
		bool operator==(money &ob3)
		{
			a=rupees==ob3.rupees;
			return a;
		}
		bool operator!=(money &ob3)
		{
			a=rupees!=ob3.rupees;
			return a;
		}
};
int main()
{
	int res;
	int op;
	cout<<"Enter the details 1"<<endl;
	money ob1;
	cout<<"Enter the details 2"<<endl;
	money ob2;
	cout<<"Enter the option 1)< 2)> 3)<= 4)>= 5)== 6)!= :";
	cin>>op;
	switch(op)
	{
		case 1:res=ob1<ob2;break;
		case 2:res=ob1>ob2;break;
		case 3:res=ob1<=ob2;break;
		case 4:res=ob1>=ob2;break;
		case 5:res=ob1==ob2;break;
		case 6:res=ob1!=ob2;break;
		default:cout<<"invalid option"<<endl;
			return 0;
	}
	if(res==1)
		cout<<"True"<<endl;
	else
		cout<<"flase"<<endl;
}
