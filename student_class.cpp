#include<iostream>
#include<string.h>
using namespace std;
class student{
	private :
		char name[30];
		int roll;
		float cgpa;
	public :
		void input(char[],int,float);
		void output();
};
void student::input(char n[],int r,float c){
	strcpy(name,n);
	roll =r;
	cgpa =c;
}
void student::output(){
	cout<<"\nName : "<<name;
	cout<<"\nRoll : "<<roll;
	cout<<"\nCgpa : "<<cgpa;
}
int main(){
	student ob;
	ob.input("harsh",607,8);
	ob.output();
	return 0;
}
