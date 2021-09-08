#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *p;
	p=&a;
	cout<<"\na="<<a;
	cout<<"\n&a="<<&a;
	cout<<"\np="<<p;
	cout<<"\n*p="<<*p;
	cout<<"\n&p="<<&p;
	cout<<"\n*&a="<<*&a;
	return 0;
}
