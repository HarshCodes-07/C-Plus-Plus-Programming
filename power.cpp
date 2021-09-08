#include<iostream>
using namespace std;
class num{
	int p,q,r;
	public :
		num(int x=7, int y=2){
			p=x;q=y;
		}
		void display(){
			int ans=1;
			for(int i=1;i<=q;i++){
				ans*=p;
			}
			cout<<ans;
		}
};
int main(){
	num ob1(4);
	return 0;
}
