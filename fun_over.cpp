// FUNCTION OVERLOADING
#include<iostream>
using namespace std;
int main(){
	int mul(int,int);
	float mul(int,float,int);
	cout<<mul(2,3);
	cout<<"\n"<<mul(2,3.5,2);
	return 0;
}
int mul(int a,int b){
	return a*b;
}

int mul(int a,float b,int c){
	return a*b*c;
}
