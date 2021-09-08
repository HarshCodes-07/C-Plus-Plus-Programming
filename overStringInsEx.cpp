#include<iostream>
using namespace std;
class A{
	public :
		char *a;
		friend istream& operator >>(istream &din,A &ob);
		friend ostream& operator >>(ostream &dout,A &ob);
};
istream& operator >>(istream &din,A &ob){
	char x[20];
	din>>x;
	ob.a=x;
	return din;
}
ostream& operator <<(ostream &dout,A &ob){
	dout<<"\nObject has : a = "<<ob.a;
	return dout;
}
int main(){
	A ob;
	cout<<"\nType a : ";
	cin>>ob;
	cout<<ob;
	return 0;
}
