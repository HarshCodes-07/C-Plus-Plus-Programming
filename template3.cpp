#include<iostream>
using namespace std;
template<class T1,class T2>
class data{
	public:
		data(T1 a,T2 b){
			cout<<"\n\ta="<<a<<"\tb="<<b;
		}
};
int main(){
	data<int,int> ob1(2,2);
	data<float,char> ob2(3.5,'X');
 	return 0;
}
