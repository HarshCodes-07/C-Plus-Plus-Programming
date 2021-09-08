#include<iostream>
using namespace std;
class A{
	protected :
		int x;
		public :
			void getA(int a){
				x=a;
			}
};
class B:public A{
	protected :
		int p;
		public :
			void getX(int x){
				p=x;
			}
			void display(){
				cout<<p*x<<"\n";
			}
};
class C:public A{
	protected :
		int q;
		public :
			void getX(int x){
				q=x;
			}
			void display(){
				cout<<q*x<<"\n";
			}
};
class D:public A{
	protected :
		int r;
		public :
			void getX(int x){
				r=x;
			}
			void display(){
				cout<<r*x<<"\n";
			}
};
main(){
	B ob1;C ob2;D ob3;
	ob1.getA(10);//x
	ob1.getX(2);//p
	ob2.getA(10);
	ob2.getX(3);//q
	ob3.getA(10);
	ob3.getX(4);//r
	ob1.display();
	ob2.display();
	ob3.display();
}
