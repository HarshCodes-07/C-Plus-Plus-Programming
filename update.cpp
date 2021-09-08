#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
	void input(){
		cin>>a>>b;
	}
	void show() {
		cout<<"\nlargest is : "<<largest();
	}
	int largest();
};
int A::largest(){
	if(a>=b)
	return a;
	else 
	return b;
}
int main(){
	A ob;
	ob.input();
	ob.show();
}
