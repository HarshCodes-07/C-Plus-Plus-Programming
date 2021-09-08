//WAP to add two objects of time class. Overload the operator ‘==’ to compare two 
//objects and display whether they are equal or not. Overload the assignment operator.
#include<iostream>
using namespace std;
class time{
	int hr;
	int m;
	int s;
	public :
		time (int a,int b,int c)
		{
			hr=a;
			m=b;
			s=c;
		}
		 void  operator ==(time ob){
			if(m==ob.m&&hr==ob.hr&&ob.s==s)
				cout<<"\nThey are Equal";
			else cout<<"\nThey are no equal";
		}
};
int main(){
	time ob1(10,45,45);
	time ob2(10,45,45);
	ob1==ob2;
}
