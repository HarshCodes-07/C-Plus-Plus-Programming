//Private Const Dest
#include<iostream>
#include <cstring>
using namespace std;
class A{
	int x;
	A(){
		x=7;
		cout<<"constructor";
	}
	~A(){
		cout<<"destructor";
	}
	public :
		void show(){
			this->A::A();
			cout<<"x = "<<x;
			this->A::~A();
		}
};
main(){
	A *ob;
	ob->show();
}
