#include<iostream>
using namespace std;
class bank;

class atm
{
	public:
		void cash(bank &ob3);
		void deposit(bank &ob4);
		void balance(bank &ob5);
};
class bank
{
	private:
		string name;
		char acc_no[20];
		int amount=0;
	public:
		void set_data()
		{
			cout<<"Welcome to indian bank"<<endl;
			cout<<"______________________________"<<endl;
			cout<<"Enter the name"<<endl;
			getline(cin,name);
			cout<<"Enter the account number"<<endl;
			cin>>acc_no;
			cout<<"Add the amount"<<endl;
			cin>>amount;
			cout<<"______________________________"<<endl;
		}
		void print()
		{
			cout<<"______________________________"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"acc_no:"<<acc_no<<endl;
			cout<<"______________________________"<<endl;
		}
	friend void atm::cash(bank &ob3);
	friend void atm::deposit(bank &ob4);
	friend void atm::balance(bank &ob5);	
};
void atm::cash(bank &ob3)
{
	int w;
	cout<<"Enter the amount to withdraw"<<endl;
	cin>>w;
	
	ob3.amount=ob3.amount-w;

	cout<<"available balance:"<<ob3.amount<<endl;
}
void atm::deposit(bank &ob4)
{
	int d;
	cout<<"Enter the amount to deposit"<<endl;
	cin>>d;

	ob4.amount=ob4.amount+d;
	cout<<"current balance:"<<ob4.amount<<endl;
}
void atm::balance(bank &ob5)
{
	cout<<"available balance:"<<ob5.amount<<endl;
}
int main()
{
	int op;
	bank ob1;
	atm ob2;
	while(1)
	{
	cout<<"Enter the option 1.create_acc 2.show_acc 3.withdraw 4.deposit 5.balance"<<endl;
	cin>>op;

	switch(op)
	{
		case 1:ob1.set_data();
		       break;
		case 2:ob1.print();
		       break;
		case 3:ob2.cash(ob1);
		       break;
		case 4:ob2.deposit(ob1);
		       break;
		case 5:ob2.balance(ob1);
		       break;
		default:return 0;
	}
	}
}







