#include<iostream>
using namespace std;
class A{
	public :
		int x,y;
		friend istream& operator >>(istream &din,A &ob);
		friend ostream& operator >>(ostream &dout,A &ob);
		void operator ==(A &ob){
			if(x==ob.x&&y==ob.y)
			cout<<"\nYES EQUAL";
			else{
				cout<<"\nNOT EQUAL";
			}
		}
		void operator -(A &ob){
			cout<<"\nx1="<<-1*x;
			cout<<"\ny1="<<-1*y;
			cout<<"\nx2="<<-1*ob.x;
			cout<<"\ny2="<<-1*ob.y;
			
		}
};
istream& operator >>(istream &din,A &ob){
	din>>ob.x;
	din>>ob.y;
	return din;
}
ostream& operator <<(ostream &dout,A &ob){
	dout<<"\nObject has : x = "<<ob.x;
	dout<<"\nObject has : y = "<<ob.y;
	return dout;
}
int main(){
	A ob;
	cout<<"\nEnter x and y for first object : ";
	cin>>ob;
	cout<<ob;
	A ob1;
	cout<<"\nEnter x and y for Second object : ";
	cin>>ob1;
	cout<<ob1;
	ob==ob1;
	cout<<"\nFor negating";
	ob-ob1;
	return 0;
}
