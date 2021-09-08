#include<iostream>
using namespace std;
class Num{
	public :
		int a;
		Num(){
			a=0;
		}
		Num(int i){
			a=i;
		}
		void operator =(Num &ob){
			a=ob.a;
		}
		void show(){
			cout<<"\nA = "<<a;
		}
};
int main(){
	Num ob(2);
	Num ob1;
	ob1=ob;//Explicit with operator overloading function else implicit
	ob1.show();
}
