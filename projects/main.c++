#include<iostream>
#include<fstream>
using namespace std;
class bank
{
	public:
		int i=0,j;
		char name[100][20];
		int check_acc;
		int amount;
		int next_acc_no=1000;
	private:
		int acc_no[100];
		float balance[100];
	public:
		void account_create()
		{
			acc_no[i]=++next_acc_no;
			cout<<"Enter the Name"<<endl;
			cin>>name;
			cout<<"Please enter at least the minimum balance amount."<<endl;
			cin>>balance[i];
			ofstream file("bank.txt",ios::app);
			if(i==0)
			{
				file<<"Account No      Name	Balance"<<endl;
			}
        		file<<acc_no[i]<<" "<<name[i]<<" "<<balance[i]<<endl;
        		file.close();
			cout<<"Thankyou for creating account"<<endl;
			cout<<"Account Number:"<<acc_no[i]<<endl;
			i++;
		}
		void check_balance()
		{
			ifstream file("bank.txt");
			cout<<"Enter the account number to check the balance"<<endl;
			cin>>check_acc;
			int acc;
			char n[20];
			float bal;
			while(file>>acc>>n>>bal)
			{
				if(acc==check_acc)
				{
					cout<<"Name:"<<n<<endl;
                			cout<<"Balance:"<<bal<<endl;
                			file.close();
                			return;
				}
			}
			cout<<"account not found"<<endl;
			file.close();
		}
		void withdrawl_money()
		{
			cout<<"Enter the account number to check the balance"<<endl;
			cin>>check_acc;
			for(j=0;j<100;j++)
			{
				if(acc_no[j]==check_acc)
				{
					cout<<"your balance"<<balance<<endl;
					cout<<"Enter the money to withdrawl"<<endl;
					cin>>amount;
					if(balance>amount)
					{
						balance-=amount;
						cout<<"Remaining balance"<<balance<<endl;
					}
					else
					{
						cout<<"You do not have sufficient balance in your account"<<endl;
					}
				}
			}

		}
		void deposit_money()
		{
			cout<<"Enter the account number to check the balance"<<endl;
			cin>>check_acc;
			for(j=0;j<100;j++)
			{
				if(acc_no[j]==check_acc)
				{
					cout<<"your balance"<<balance<<endl;
					cout<<"Enter the money to deposit"<<endl;
					cin>>amount;
					balance+=amount;
					cout<<"your balance"<<balance<<endl;
					cout<<"deposit successfull"<<endl;
				}
			}

		}
};
int main()
{
	bank ob1;
	int op;
	while(1)
	{
		//system("clear");
		cout<<"option 1:create New bank account"<<endl;
		cout<<"option 2:check the balance"<<endl;
		cout<<"option 3:withdrawl money"<<endl;
		cout<<"option 4:deposit money"<<endl;

		cout<<"Enter the option"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:ob1.account_create();break;
			case 2:ob1.check_balance();break;
			case 3:ob1.withdrawl_money();break;
			case 4:ob1.deposit_money();break;
		}
	}
}

