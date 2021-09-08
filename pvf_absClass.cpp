#include<iostream>
using namespace std;
class first{
	protected : 
	int b;
	public :
		first(){
			b=10;
		}
		virtual void display()=0;
};
class Second:public first{
	protected :
		int d;
	public :
		Second(){
			d=20;
		}
		void display(){
			cout<<"\n B = "<<b<<"\n D = "<<d;
		}
};
int main(){
	first *p;
//	first ob;		Not possible as it is Abstract Class type
	Second s;
	p=&s;
	p->display();
	return 0;
}
