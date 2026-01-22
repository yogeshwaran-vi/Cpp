#include<iostream>
using namespace std;
//base class
class payment
{
	public:
		virtual void pay_method(int x)
		{
			cout<<"base class"<<endl;
			cout<<"successfully complete your payment $="<<x<<endl;
		}
};
//derived class 1
class upi:public payment
{
	public:
		void pay_method(int x)
		{
			cout<<"upi method"<<endl;
			cout<<"successfully complete your payment $="<<x<<endl;
		}

};
//derived class 2
class credit_card:public payment
{
	public:
		void pay_method(int x)
		{
			cout<<"credit card method"<<endl;
			cout<<"successfully complete your payment $="<<x<<endl;
		}
};
//derived class 3
class Debit_card:public payment
{
	public:
		void pay_method(int x)
		{
			cout<<"Debit card method"<<endl;
			cout<<"successfully complete your payment $="<<x<<endl;
		}
};
//derived class 4
class walletpayment:public payment
{
	public:
		void pay_method(int x)
		{
			cout<<"wallet method"<<endl;
			cout<<"successfully complete your payment $="<<x<<endl;
		}
};
int main()
{
	payment*ptr;
	int op,amount;
	cout<<"Enter the option to pay the amount"<<endl;
	cout<<"1.upi 2.credit card 3.debit card 4.wallet"<<endl;
	cin>>op;
	switch(op)
	{
		case 1: ptr = new upi;break;
		case 2: ptr = new credit_card;break;
		case 3: ptr = new Debit_card;break;
		case 4: ptr = new walletpayment;break;
		case 5: exit(0);break;
		default: cout<<"Invalid option"<<endl;
	}
	cout<<"Enter the amount to pay"<<endl;
	cin>>amount;
	ptr->pay_method(amount);
}

