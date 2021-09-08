//WAP a program to create a Employee structure having eName,eno,esal . getData() and calculate() -> gross hra=10% and ta=7%
#include<iostream>
using namespace std;
struct Emp{
	char eName[20];
	int eno;
	float esal;
	void getData(){
		cout<<"Enter the Empoyee name and  number and salary : --- \n";
		cin>>eName>>eno>>esal;
	}
	void calculate(){
		float hra=(10*esal)/100;
		float ta=(7*esal)/100;
		float gross=hra+ta+esal;
		cout<<"The Gross Salary is :- "<<gross<<" Rupees.";
	}
};
int main(){
	struct Emp e1;
	e1.getData();
	e1.calculate();
	return 0;
}
