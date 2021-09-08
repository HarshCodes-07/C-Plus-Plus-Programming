#include<iostream>
using namespace std;
template<class T>
void display(T x){
	cout<<"\nTemplate : "<<x;
}
void display(int x){
	cout<<"\nExplicit Display : "<<x;
}
main(){
	display(100);
	display(2.5);
	display('c');
}
