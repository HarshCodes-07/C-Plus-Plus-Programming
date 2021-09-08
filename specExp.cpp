#include<iostream>
using namespace std;
void test(int x) throw (){
	if(x==0) throw 'x';
	if(x==1) throw x;
	if(x==-1) throw 1.0;
}
int main(){
	try{
		test(0);
		test(1);
		test(-1);
		test(2);
	}
	catch(char c){
		cout<<"\nCaught a Char";
	}
	catch(int m){
		cout<<"\nCaught an int";
	}
	catch(double m){
		cout<<"\nCaught a double";
	}
	cout<<"\nEnd of Catch";
	return 0;
}
