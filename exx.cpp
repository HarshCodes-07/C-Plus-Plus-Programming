#include<iostream>
using namespace std;
class Base1 {
	public:
		void show(){
			cout<<"\nBASE 1";
		}
};
class Derived1:public Base1{
	public:
		int x;
		void show(){
			cout<<"\nDerived 1";
		}
		Derived1(){
			x=10;
		}
};
int main(){
	Base1 *bp,b;
	Derived1 d;
	bp=&d;
	bp->show();
	cout<<bp->x;
	return 0;
}

