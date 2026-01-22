#include<iostream>
#include<string>
using namespace std;
class car
{
	public:
		string brand = "ford";
	
		void comp()
		{
			cout<<"hoii hoii"<<endl;
		}

};
class vehicle:public car
{
	public:
		string model = "mustang";
};
int main()
{
	vehicle mycar;
	mycar.comp();
	cout<<mycar.brand+" "+mycar.model<<endl;
	return 0;
}
