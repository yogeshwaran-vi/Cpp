#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n>0)
		return n*factorial(n-1);
	else
		return 1;
}

int main()
{
	int n;
	cout<<"enter the n value"<<endl;
	cin>>n;
	int result=factorial(n);
	cout<<"result= "<<result<<"\n";
}
