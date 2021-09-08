#include<iostream>
using namespace std;
class S{
		int a;
		int sum;
		public :
			void input(){
				cin>>a;
			}
			void add(S *,S *);
};
void S::add(S *B,S *C){
	sum=(*B).a+(*C).a;
	cout<<sum;
}
int main(){
	S ob1,ob2;
	ob1.input();
	ob2.input();
	ob1.add(&ob1,&ob2);
//	ob2.add(ob1,ob2);
	return 0;
}
