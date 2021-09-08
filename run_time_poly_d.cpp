#include<iostream>
using namespace std;
class Base{
	public :
		void display(){
			cout<<"\nBASE";
		}
		virtual void show(){
			cout<<"\nBASE CLASS";
		}
};
class Derived : public Base{
	public :
		void display(){
			cout<<"\nDERIVED";
		}
		void show(){
			cout<<"\nDERIVED CLASS";
		}
};
int main(){
	Base b;
	Derived d;
	Base *bptr;
	bptr=&b;
	bptr->show();
	bptr->display();
	bptr=&d;
	bptr->show();
	bptr->display();
	return 0;
}
