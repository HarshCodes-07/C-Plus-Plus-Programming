#include <iostream>
using namespace std;
class B;
class A{
	int x;
	public:
	void input(){
		cin>>x;
	}
	void display()	{
	cout<<"X : "<<x<<endl;
	}
	friend void swap(A&,B&);
};
class B{
	int y;
	public:
	void input(){
		cin>>y;
	}
	void display(){
	cout<<"Y : "<<y<<endl;
	}
	friend void swap(A&,B&);
};
void swap(A &ob1,B &ob2){
	int temp;
	temp =ob1.x;
	ob1.x = ob2.y;
	ob2.y = temp;
}
int main(){
	A ob1;
	B ob2;
	ob1.input();
	ob2.input();
	cout<<"\nBEFORE : \n";
	ob1.display();
	ob2.display();
	swap(ob1,ob2);
	cout<<"\nAFTER : \n";
	ob1.display();
	ob2.display();
}
