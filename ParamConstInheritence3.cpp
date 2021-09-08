#include<iostream>
using namespace std;
class A{
	int x;
	public:
	A(int i){
		x=i;
		cout<<"\nx = "<<x;
	}
};
class B{
	float p,q;
	public : 
		B(float m,float n):p(m*2),q(n+1){
			cout<<"\np = "<<p<<" q = "<<q;
		}
};
class C:public A,public B{
	int u,v;
	public:
		C(int a,int b,float c):A(a*3),B(c,c+2),u(a){
			v=b;
			cout<<"\nu = "<<u<<" v = "<<v;
		}
};
int main(){
	C ob(2,4,2.5);
	return 0;
}
