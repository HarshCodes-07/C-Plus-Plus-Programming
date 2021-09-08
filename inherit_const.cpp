#include<iostream>
using namespace std;
class A{
	private :
		int x;
	public :
		A(){
			x=20;
		}
		void show(){
			cout<<"\n x = "<<x;
		}
};
class B:public A{
	public :
		int y;
		B(){
			y=30;
		}
		void showy(){
			cout<<"\n y = "<<y;
		}
};
main(){
	B ob;
	ob.showy();
	ob.show();
}
