#include<iostream>
using namespace std;
class X{
	int a;
	float b;
	public:
		X(int x,float y){
			a=x;
			b=y;
			cout<<"\nA is initialized";
		}
		void showX(){
			cout<<"\n a = "<<a<<" b = "<<b;
		}
};
class Y:public X{
	float p;
	char c;
	public:
	Y(float x,char y,int z):X(z,x){
		p=x;
		c=y;
		cout<<"\nB is initialized";
	}
	void showY(){
		cout<<"\n p = "<<p<<" c = "<<c;
	}
};
int main(){
	Y ob(2,'H',4.5);
	ob.showX();
	ob.showY();
	return 0;
}
