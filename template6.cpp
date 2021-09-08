#include<iostream>
using namespace std;
template<class E>
void exchange(E &a,E &b){
	E t=a;
	a=b;
	b=t;
}
main(){
	int x=5,y=8;
	cout<<"\n x = "<<x<<"\t y = "<<y;
	exchange(x,y);
	cout<<"\n x = "<<x<<"\t y = "<<y;
}
