//Real Time Example
#include<iostream>
using namespace std;
//base class
class RBI //Abstract class
{
public:
char name[20],accno[20];//data member
int yr;
double amount,IR,tot_bal;
public:
virtual void setdata()=0;//pure virtual function
virtual void fd()=0;//pure virtual function
virtual void print()=0;//pure virtual function
};
//derived 1 class
class AXIS:public RBI
{
//internally
//public:
//char name[20],accno[20];
//int yr;
//double amount,IR,tot_bal;
public:
void setdata()
{
cout<<"---------------------------------"<<endl;
cout<<"welcome to AXIS BANK"<<endl;
cout<<"enter the name.."<<endl;
cin>>name;
cout<<"enter the account no"<<endl;
cin>>accno;
cout<<"enter the amount.."<<endl;
cin>>amount;
cout<<"enter the no of years for Fixed deposit"<<endl;
cin>>yr;
cout<<"------------------------------------"<<endl;
}
void fd()
{
IR=(amount*yr*8.5)/100;
tot_bal=amount+IR;
}
void print()
{
cout<<"-------------------------------"<<endl;
cout<<"AXIS BANK account holder"<<endl;
cout<<"name="<<name<<endl;
cout<<"account no="<<accno<<endl;
cout<<"amount="<<amount<<endl;
cout<<"yr="<<yr<<endl;
cout<<"IR="<<IR<<endl;
cout<<"totalamount="<<tot_bal<<endl;
cout<<"-------------------------------"<<endl;
}
};
//derived 2 class
class HDFC:public RBI
{
//internally
//public:
//char name[20],accno[20];
//int yr;
//double amount,IR,tot_bal;

public:
  void setdata()
  {
  cout<<"---------------------------------"<<endl;
  cout<<"welcome to HDFC  BANK"<<endl;
  cout<<"enter the name.."<<endl;
  cin>>name;
  cout<<"enter the account no"<<endl;
  cin>>accno;
  cout<<"enter the amount.."<<endl;
  cin>>amount;
  cout<<"enter the no of years for Fixed deposit"<<endl;
  cin>>yr;
  cout<<"------------------------------------"<<endl;
  }
 void fd()
{
IR=(amount*yr*9.5)/100;
tot_bal=amount+IR;
}
void print()
  {
  cout<<"-------------------------------"<<endl;
  cout<<"HDFC BANK account holder"<<endl;
  cout<<"name="<<name<<endl;
  cout<<"account no="<<accno<<endl;
  cout<<"amount="<<amount<<endl;
  cout<<"yr="<<yr<<endl;
  cout<<"IR="<<IR<<endl;
  cout<<"totalamount="<<tot_bal<<endl;
  cout<<"-------------------------------"<<endl;
  }

};
//Derived 3 class
class SBI:public RBI
{

//internally
//public:
//char name[20],accno[20];
//int yr;
// double amount,IR,tot_bal;
public:
void setdata()
    {
    cout<<"---------------------------------"<<endl;
    cout<<"welcome to SBI  BANK"<<endl;
    cout<<"enter the name.."<<endl;
    cin>>name;
    cout<<"enter the account no"<<endl;
    cin>>accno;
    cout<<"enter the amount.."<<endl;
    cin>>amount;
    cout<<"enter the no of years for Fixed deposit"<<endl;
    cin>>yr;
    cout<<"------------------------------------"<<endl;
    }
void fd()
{
IR=(amount*yr*11.5)/100;
tot_bal=amount+IR;
}
 void print()
    {
    cout<<"-------------------------------"<<endl;
    cout<<"SBI BANK account holder"<<endl;
    cout<<"name="<<name<<endl;
    cout<<"account no="<<accno<<endl;
    cout<<"amount="<<amount<<endl;
    cout<<"yr="<<yr<<endl;
    cout<<"IR="<<IR<<endl;
    cout<<"totalamount="<<tot_bal<<endl;
    cout<<"-------------------------------"<<endl;
    }






};
int main()
{
//RBI  r1;//invalid,you cannot create object for abstract class
RBI *ptr;
int op;
cout<<"enter the option 1) AXIS BANK 2)HDFC BANK 3)SBI BANK 4) EXIT"<<endl;
cin>>op;
switch(op)
{
case 1:{
        ptr=new AXIS;
        break;
        }
case 2: {
         ptr=new HDFC;
         break;
           }
case 3:{
         ptr=new SBI;
         break;
        }
case 4:cout<<"EXIT"<<endl;
       return 0;
default:cout<<"invalid option"<<endl;
        return 0;

}
ptr->setdata();
ptr->fd();
ptr->print();

}


