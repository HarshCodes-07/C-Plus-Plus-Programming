/*WAP to add two objects of distance class. Overload the operator ‘>’ to compare two
objects and return the object with larger time value and display it. Overload the ‘==’ 
operator to compare and display whether two given objects contain same distance 
value.*/
#include<iostream>
using namespace std;
class Distance{
	int km;
	int m;
	public :
		Distance (int b,int a)
		{
			km=b;
			m=a;
		}
		friend Distance operator >(Distance ob1,Distance ob2){
			if(ob1.m>=ob2.m)
				return ob1;
			else 
				return ob2;
		}
		 void  operator ==(Distance ob){
			if(km*1000+m==ob.m+ob.km*1000)
				cout<<"\nThey are Equal";
			else if(km*1000+m>ob.m+ob.m*1000){
				cout<<"\nOb1 is greater";
			}else{
				cout<<"\nOb1 is lesser";
			}
		}
		void showm(){
			cout<<"\nKilo Meter"<<km;
			cout<<"\nMeter="<<m;
		}
};
int main(){
	Distance ob1(10,500);
	Distance ob2(10,500);
	ob1==ob2;
	Distance ob3(0,0);
	ob3=ob1>ob2;
	cout<<"\nThe largest is : ",ob3.showm();
}
