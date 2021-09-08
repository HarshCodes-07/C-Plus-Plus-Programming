#include<iostream>
using namespace std;
class B;
class A{
	int P;
	int Q;
	public : 
	void input(){
		cin>>P>>Q;
	}
		void output(){
		cout<<"\t"<<P;
	}
	friend void add(A &,B &);
};
class B{
	float X;
	float Y;
	public : 
	void input(){
		cin>>X>>Y;
	}
	friend void add(A &,B &);
};
void add(A &ob1,B &ob2){
	cout<<"\t"<<"Sum of Int : "<<(ob1.P + ob1.Q)<<"\n";
	cout<<"\t"<<"Sum of Float : "<<(ob2.X + ob2.Y)<<"\n";
}
int main(){
	A ob;
	cout<<"\nEnter 2 Integers : ";
	ob.input();
	cout<<"\nEnter 2 Floats : ";
	B ob1;
	ob1.input();
	add(ob,ob1);
	return 0;
}
