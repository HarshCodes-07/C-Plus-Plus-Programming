//Create a class which allocates the memory for a string through dynamic constructor. Overload the binary + to concatenate two strings and display it.
#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
		char *s;
		A(){
			s=new char[20];
			s="";
		}
		A(char *x){
			s=new char[10];
			s=x;
		}
		A operator +(A ob){
			char xx[100];
			for(int i=0;i<strlen(s);i++)
				xx[i]=s[i];
			for(int i=strlen(s);i<strlen(s)+strlen(ob.s);i++)
				xx[i]=ob.s[i-strlen(s)];	
			char *xxx=xx;
			A x(xxx);
			return x;
		}
};
int main(){
	A ob1("Harsh");
	A ob2("dwivedi");
	A ob3;
	ob3=ob1+ob2;
	cout<<"\nAfter Concat : "<<ob3.s;
}
