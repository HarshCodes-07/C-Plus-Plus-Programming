//add two nos using call by reference
#include<iostream>
using namespace std;
int add(int &a ,int &b);
int main(){
	int a=5,b=2;
	cout<<"a + b = "<<add(a,b);
}
int add(int &a,int &b){
	return a+b;
}
