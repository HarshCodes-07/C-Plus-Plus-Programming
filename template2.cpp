//NORMAL TEMPLATE FUNCTION
#include<iostream>
using namespace std;
template<class P>
void show(P x){
	cout<<"\nx="<<x;
}
int main(){
	char c='A';
	int i=5;
	float d=2.5;
	show(c);
	show(d);
	show(i);
 	return 0;
}
