#include<iostream>
using namespace std;
class A{
	public :
		int a;
		friend istream& operator >>(istream &din,A &ob);
		friend ostream& operator >>(ostream &dout,A &ob);
};
istream& operator >>(istream &din,A &ob){
	din>>ob.a;
	return din;
}
ostream& operator <<(ostream &dout,A &ob){
	dout<<"\nObject has : a = "<<ob.a;
	return dout;
}
int main(){
	A ob
	cout<<"\nEnter a : ";
	cin>>ob;
	cout<<ob;
	return 0;
}
