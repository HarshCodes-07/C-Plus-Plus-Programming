#include<iostream>
using namespace std;
template<class T>
class A{
	T a;
	public:
		A(T x){
			a=x;
		}
		T operator *(A &ob){
			T result;
			result=this->a*ob.a;
			return result;
		}
		void show(){
			cout<<"\na="<<a;
		}
};
main(){
	A<int> ob1(2);
	A<int> ob2(4);
	ob1.show();
	ob2.show();
	cout<<ob1*ob2;
}

