// Dynamic Constructor
#include<iostream>
using namespace std;
class T{
	int *p;
	public :
		T(){
			p=new int;
			*p=5;
		}
		T(int v){
			p=new int;
			*p=v;
		}
		~T(){
			delete p;
		}
		int display(){
			return *p;
		}
};
int main(){
	T ob;T ob1(7);
	cout<<ob.display()<<"   "<<ob1.display();
	return 0;
}
