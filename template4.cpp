#include<iostream>
using namespace std;
template<class T1,class T2>
class data{
	public:
		void show(T1 a,T2 b){
			cout<<"\na="<<a<<"\tb="<<b;
		}
};
int main(){
	int i[3];
	float f[3];
	cout<<"\nEnter"<<3*2<<"values one by one :";
	for(int j=0;j<3;j++){
		cin>>i[j];
		cin>>f[j];
	}
	data<int,float> h;
	for(int m=0;m<3;m++){
		h.show(i[m],f[m]);
	}
 	return 0;
}
