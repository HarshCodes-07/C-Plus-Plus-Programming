#include<iostream>
using namespace std;
int main(){
	int *ptr_i=new int;
	cin>>*ptr_i;
	float *ptr_f=new float(2.5);
	char *ptr_c=new char('A');
	cout<<*ptr_i<<*ptr_f<<*ptr_c;
	delete ptr_i;
	delete ptr_f;
	delete ptr_c;
}
