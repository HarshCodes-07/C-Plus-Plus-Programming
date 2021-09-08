#include<iostream>
using namespace std;
class Num{
	private :
		int a,b,c,d;
	public :
		Num(int p,int q,int r,int s){
			a=p;
			b=q;
			c=r;
			d=s;
		}
		void operator ++(){
			a++;
			b++;
			c++;
			d++;
		}
		void show(){
			cout<"\n";
			cout<<"\n\ta = "<<a;
			cout<<"\n\tb = "<<b;
			cout<<"\n\tc = "<<c;
			cout<<"\n\td = "<<d;
			cout<"\n";
		}
};
int main(){
	Num A(1,2,3,4);
	cout<<"\nBefore : ";
	A.show();
	++A;
	cout<<"\nAfter : ";
	A.show();
	return 0;
}
