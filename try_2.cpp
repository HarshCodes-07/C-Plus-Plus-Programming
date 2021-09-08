#include<iostream>
using namespace std;
void test(int x){
	try{
		if(x==0) throw x;
		if(x==-1) throw 'x';
		if(x==1) throw 1.0;
	}
	catch(char c){
		cout<<"\nCaught a Character";
	}
	catch(int c){
		cout<<"\nCaught an Integer";
	}
	catch(double c){
		cout<<"\nCaught a Double";
	}
}
int main(){
	test(-1);
	test(0);
	test(1);
	return 0;
}
