#include<iostream>
using namespace std;
class A{
	public :
		int x;
	A(){
		x=10;
	}
	void show(){
		B b;
		cout<<"\n x = "<<x;
		cout<<"\n y = "<<b.y;
	}
	class B{
		public :
			int y;
		B(){
			y=20;
		}
	/*	void show(){
		//	A a;
		//	cout<<"\n x = "<<a.x;
			cout<<"\n x = "<<x;
			cout<<"\n y = "<<y;
		}*/
	};
};
main(){
	A ob;
	ob.show();
}
