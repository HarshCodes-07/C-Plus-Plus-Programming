#include<iostream>
using namespace std;
template<class T>
class data{
	private :
		T b;
	public:
		data(T c){
			b=c;
			cout<<"\n"<<sizeof(b);
		}
};
int main(){
	data<char> h('A');
	data<int> i(100);
	data<float> x(1.1);
 	return 0;
}
