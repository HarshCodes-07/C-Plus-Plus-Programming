#include<iostream>
using namespace std;
class A{
	int x;
	public:
		A(int i){
			x=i;
			cout<<"\nA is initialized";
		}
		void showX(){
			cout<<"\n x = "<<x;
		}
};
class B{
	float y;
	public:
	B(float i){
		y=i;
		cout<<"\nB is initialized";
	}
	void showY(){
		cout<<"\n y = "<<y;
	}
};
class C : public A,public B{
	int m,n;
	public :
		C(int a,float b,int p,int q):A(a),B(b){
			m=p;
			n=q;
		}
		void showMN(){
			cout<<"\n m = "<<m<<" n = "<<n;
		}
};
int main(){
	C ob(2,3.5,4,7);
	ob.showX();
	ob.showY();
	ob.showMN();
	return 0;
}
