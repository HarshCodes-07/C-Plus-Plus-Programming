// Add global and local of same name
#include<iostream>
using namespace std;
int x=5;
int main(){
	int x=4;
	cout<<"Local + GLOBAL = "<<x + ::x;
	return 0;
}
