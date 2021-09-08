#include<iostream>
using namespace std;
class A{
	public :
		A(){
			cout<<"\nBASE";
		}
		A(int x){
			cout<<"\nPARAMETERZIED";
		}
};
class B:public A{
	public:
		B(int y):A(y+1){
			cout<<"\nDERIVED";
		}
};
main(){
	B ob(3);
}
