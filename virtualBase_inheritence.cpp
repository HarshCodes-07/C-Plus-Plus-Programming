#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B:public virtual A{
	protected:
		int b;
};
class C:virtual public A{
	protected :
		int c;
};
class D:public B,public C{
	int d;
	public:
		void input(){
			cin>>a>>b>>c>>d;
			cout<<a<<" "<<b<<" "<<c<<" "<<d;
		}
};
int main(){
	D ob;
	cout<<"\nEnter a , b , c and d : ";
	ob.input();
	return 0;
}
