#include<iostream>
using namespace std;
class A{
	public :
		void display(){
			cout<<"\nBASE";
		}
};
class B:public A{
	
	public :
		void display(){
			cout<<"\nDERIVED";
		}
};
int main(){
	B ob;
	ob.display();  //DERIVED
	ob.A::display(); //BASE
}
