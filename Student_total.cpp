#include<iostream>
using namespace std;
class Student{
	int rollNo;
	float marks[5];
	public :
		void input(){
			cout<<"\nEnter Roll : ";
			cin>>rollNo;
			cout<<"\nEnter 5 Marks ";
			for(int i=0;i<5;i++)
				cin>>marks[i];
		}
		void total(){
			cout<<"\nRoll No = "<<rollNo;
			int T=0;
			for(int i=0;i<5;i++)
				T+=marks[i];
			cout<<"\nTotal = "<<T;
		}
};
int main(){
	Student ob[5];
	for(int i=0;i<5;i++)
		ob[i].input();
	for(int i=0;i<5;i++)
		ob[i].total();	
}
