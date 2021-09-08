#include<iostream>
using namespace std;
class A{
	public :
		int a;
		A(){
			a=10;
		}
};
class B:public A{
	public :
		int b;
		B(){
			a=40;
			b=30;
		}
};
main(){
	A x;
	B y;
	cout<<x.a;
	cout<<y.a;
	x=y;
	cout<<x.a;
	cout<<y.b;
}
