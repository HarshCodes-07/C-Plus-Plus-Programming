// Add global and local of same name
#include<iostream>
using namespace std;
int x=5;
int main(){
	int x=4;
	cout<<"Local and GLOBAL are : "<<x<<" : "<<::x;
	if(x>::x)
		cout<<"\nLocal : "<<x;
	else
		cout<<"\nGlobal : "<<::x;
	return 0;
}
