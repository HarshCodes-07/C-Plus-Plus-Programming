#include<iostream>
using namespace std;
class item{
	static int count;
	int number;
	public :
		void getData(int a){
			number =a;
			count ++;
		}
		void getCount(){
			cout<<"\nCount = "<<count;
		}
};
int item::count=10;
int main(){
	item a,b,c;
	a.getCount();
	b.getCount();
	c.getCount();
	a.getData(200);
	b.getData(100);
	c.getData(300);
	a.getCount();
	b.getCount();
	c.getCount();
}
