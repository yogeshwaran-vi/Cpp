#include<iostream>
using namespace std;

class Animal
{
	public:
		void animalsound()
		{
			cout<<"Animals make a sound"<<endl;
		}
};
class dog:public Animal
{
	public:
		void animalsound()
		{
			cout<<"dog: lool lool"<<endl;
		}
};
class cat:public Animal
{
	public:
		void animalsound()
		{
			cout<<"cat: meow meow"<<endl;
		}
};
int main()
{
	Animal a1;
	dog d1;
	cat c1;
	a1.animalsound();
	d1.animalsound();
	c1.animalsound();
}
