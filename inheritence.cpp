#include<iostream>
using namespace std;
class M{
	protected :
		int a;
		public :
			void getA(int x){
				a=x;
			}
};
class N{
	protected :
		int b;
		public :
			void getB(int x){
				b=x;
			}
};

class P:public N,public M{
	protected :
		int c;
		public :
			void show(){
				c=a*b;
				cout<<"c = "<<c;
			}
};
main(){
	P ob2;
	ob2.getA(5);
	ob2.getB(6);
	ob2.show(); 
}

