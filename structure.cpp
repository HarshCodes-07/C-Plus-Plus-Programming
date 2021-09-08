// Implementation of student structure
#include<iostream>
using namespace std;
struct student{
	char name[20];
	int roll;
	void input(){
		cout<<"Enter the name and roll number : --- \n";
		cin>>name>>roll;
	}
	void show(){
		cout<<"The name is : -- "<<name<<" and Roll No is :-- "<<roll<<".";
	}
};
int main(){
	struct student s1;
	s1.input();
	s1.show();
}
