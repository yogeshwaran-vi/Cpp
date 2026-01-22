#include<iostream>
using namespace std;
template <class Type>

class A
{
	private:
		Type x[5];
		int i;
	public:
		void setdata()
		{
			cout<<"Enter the elements"<<endl;
			for(i=0;i<5;i++)
			{
				cin>>x[i];
			}
		}
		void display()
		{
			cout<<"printing the elements"<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"x["<<i<<"]="<<x[i]<<endl;
			}
		}
};
int main()
{
	A <int> ob1;
	ob1.setdata();
	ob1.display();
	A <float> ob2;
	ob2.setdata();
	ob2.display();
}
