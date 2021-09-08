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
		Num operator +(Num ob){
			Num T;
			T.x=x+ob.x;
			T.y=y+ob.y;
			return T;
		}
		void show(){
			cout<"\n";
			cout<<"\n\tx = "<<x;
			cout<<"\n\ty = "<<y;
			cout<"\n";
		}
};
int main(){
	Num A(2,3);
	Num B(3,7);
	cout<<"\nFor A : ";
	A.show();
	cout<<"\nFor B : ";
	B.show();
	Num C;
	C=A+B;
	cout<<"\nFor C : ";
	C.show();
	return 0;
}
