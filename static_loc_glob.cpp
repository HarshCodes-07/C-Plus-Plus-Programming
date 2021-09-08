#include<iostream>
using namespace std;
int c=2;
class B{
	public:
		static int c;
};
int B::c=3;
int main(){
	int c=1;
	cout<<"\nStatic var = "<<B::c;
	cout<<"\nGlobal var = "<<::c;
	cout<<"\nLocal var = "<<c;
}
