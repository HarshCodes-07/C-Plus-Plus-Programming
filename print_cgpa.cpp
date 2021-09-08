#include <iostream>
using namespace std;
class Stud
{	
	int roll;
	char name[30];
	static int marks;
	float cgpa;
	public:
		void input(){
			cout<<"\nEnter the Roll : ";
			cin>>roll;
			cout<<"\nEnter the Name : ";
			cin>>name;
			cout<<"\nEnter the marks : ";
			cin>>marks;
		}
		static void getCgpa(){
			cout<<marks/10;
		}
};
int Stud::marks;

int main()
{
	Stud ob;
	ob.input();	
	ob.getCgpa();
	return 0;
}
