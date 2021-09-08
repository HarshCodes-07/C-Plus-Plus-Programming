#include<iostream>
using namespace std;
class complex{
	float x,y;
	public :
	void input(int a,int b){
		x=a;
		y=b;
	}
	void output(complex A){
		cout<<A.x<<" i"<<A.y<<"\n";
	}
	friend complex sum(complex,complex);
};
complex sum(complex A,complex B){
	complex C1;
	C1.x=A.x+B.x;
	C1.y=A.y+B.y;
	return C1;
}
int main(){
	complex A,B,C;
	A.input(10,20);
	B.input(30,4);
	cout<<"\nAfter Adding\n";
	C=sum(A,B);
	C.output(C);
	return 0;
}
