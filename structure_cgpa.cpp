// Implementation of student structure
#include<iostream>
using namespace std;
struct student{
	char name[20];
	int roll;
	float marks;
}s[5];
void getData();
void showCGPA();
int main(){
	getData();
	showCGPA();
}
void getData(){
	for(int i=0;i<5;i++){
		cout<<"Enter details of student "<<i+1<<" : ";
		cout<<"\nEnter name of student "<<i+1<<" : ";
		cin>>s[i].name;
		cout<<"Enter roll of student "<<i+1<<" : ";
		cin>>s[i].roll;
		cout<<"Enter marks of student "<<i+1<<" : ";
		cin>>s[i].marks;
	}
}
void showCGPA(){
	for(int i=0;i<5;i++){
		cout<<"\nDetails of student : "<<i+1<<" is ";
		cout<<"\nName of student "<<i+1<<" is "<<s[i].name;
		cout<<"\nRoll of student "<<i+1<<" is "<<s[i].roll;
		float cgpa=s[i].marks/10;
		if(cgpa>5.5)
		cout<<"\nPASS : The CGPA of student "<<i+1<<" is "<<cgpa;
		else
		cout<<"\nFAIL : The CGPA of student "<<i+1<<" is "<<cgpa;
	}
}
