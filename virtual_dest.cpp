#include<iostream>
using namespace std;
class B{
	public :
		B(){
			cout<<"\nConstructor B";
		}
		virtual ~B(){
			cout<<"\nDestructor B";
		}
};
class D:public B{
	public :
		D(){
			cout<<"\nConstructor D";
		}
		virtual ~D(){
			cout<<"\nDestructor D";
		}
};
int main(){
	B *p;
	p=new D;
	delete p;
	return 0;
}
