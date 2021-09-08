#include<iostream>
using namespace std;
class Num{
	public :
		int x,y;
		Num(){
			
		}
		Num(int i,int j){
			x=i;
			y=j;
		}
		friend Num operator +(Num ob,Num ob1);
		void show(){
			cout<"\n";
			cout<<"\n\tx = "<<x;
			cout<<"\n\ty = "<<y;
			cout<"\n";
		}
};
Num operator +(Num ob,Num ob1){
			Num T;
			T.x=ob1.x+ob.x;
			T.y=ob1.y+ob.y;
			return T;
		}
int main(){
	Num A(2,3),B(4,5),C;
	cout<<"\nFor A : ";
	A.show();
	cout<<"\nFor B : ";
	B.show();
	C=A+B;
	cout<<"\nFor C : ";
	C.show();
	return 0;
}
