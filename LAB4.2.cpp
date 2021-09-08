#include<iostream>
using namespace std;
class D2;
class D1{
	float m, cm;
	public :
		void input(){
			cout<<"\nEnter m and cms : ";
			cin>>m>>cm;
		}
		friend void compare(D1 &,D2 &);
};
class D2{
	float feet,inch;
	public :
		void input(){
			cout<<"\nEnter feet and inch : ";
			cin>>feet>>inch;
		}
		friend void compare(D1 &,D2 &);
};
void compare(D1 &ob1,D2 &ob2){
	int a=(ob1.m+ob1.cm/100)/3.281;
	int b=(ob2.feet+ob2.inch/12);
	if(a>b){
		cout<<"\nDistance in M and Cm is greater.";
	}
	else{
		cout<<"\nDistance in Feet and Inches is Greater.";
	}
}
int main(){
	D1 ob1;
	D2 ob2;
	ob1.input();
	ob2.input();
	compare(ob1,ob2);
	return 0;
}

