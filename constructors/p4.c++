#include<iostream>
using namespace std;
class car
{
	public:
		string brand;
		string model;
		int year;
		car()
		{
			brand = "UNKNOWN";
			model = "UNKNOWN";
			year  = 0;
		}
		car(string x,string y,int z)
		{
			brand = x;
			model = y;
			year  = z;
		}
};
int main()
{
	car ob1("BMW","X7",2024);
	car ob2("TATA","XUV",2025);
	car ob3;

	cout<<ob1.brand<<" "<<ob1.model<<" "<<ob1.year<<endl;
	cout<<ob2.brand<<" "<<ob2.model<<" "<<ob2.year<<endl;
	cout<<ob3.brand<<" "<<ob3.model<<" "<<ob3.year<<endl;
}
