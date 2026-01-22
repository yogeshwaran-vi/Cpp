#include<iostream>
using namespace std;
class dog
{
	public:
		void bark(string &ob2);
};
void dog::bark(string &ob2)
{
	cout<<"bark func called is "<<endl;
	cout<<ob2<<endl;
}
int main()
{
	dog ob1;
	string x;
	cin>>x;
	ob1.bark(x);
}
