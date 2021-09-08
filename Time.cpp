#include<iostream>
using namespace std;
class Time{
	public :
		int hrs,min,sec;
		Time(){
			
		}
		Time(int i,int j,int k){
			hrs=i;
			min=j;
			sec=k;
		}
		friend Time operator +(Time ob,Time ob1);
		void show(){
			cout<"\n";
			cout<<"\n\tHOURS = "<<hrs;
			cout<<"\n\tMINUTES = "<<min;
			cout<<"\n\tSECOND = "<<sec;
			cout<"\n";
		}
};
Time operator +(Time ob,Time ob1){
			Time T;
			int x=ob1.sec+ob.sec;
			int m=x/60;
			T.sec=x%60;
			int y=ob1.min +ob.min+m;
			T.min=y%60;
			T.hrs=ob1.hrs+ob.hrs+y/60;
			return T;
		}
int main(){
	Time T1(2,34,40);
	Time T2(5,55,15);
	Time T3;
	cout<<"\nFor T1 : ";
	T1.show();
	cout<<"\nFor T2 : ";
	T2.show();
	T3=T1+T2;
	cout<<"\nFor T3 After adding: ";
	T3.show();
	return 0;
}
