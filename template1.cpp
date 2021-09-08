#include<iostream>
using namespace std;
template<class T>
class data{
	public:
		data(T c);
};
template <class T>
data<T> :: data(T c){
	cout<<"\nc="<<c;
}
int main(){
	data<char> h('A');
	data<int> i(100);
	data<float> x(1.1);
 	return 0;
}
