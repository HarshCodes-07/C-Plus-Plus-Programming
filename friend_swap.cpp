#include<iostream>
using namespace std;
class SwapInt;
class I{
	int x,y;
	public :
		void input(int a,int b){
			x=a;
			y=b;
		}
		void output(){
			cout<<x<<" "<<y<<"\n";
		}
		friend class SwapInt;
};
class SwapInt{
	public :
		void swap(I &ob){
			int temp=ob.x;
			ob.x=ob.y;
			ob.y=temp;
		}
};
int main(){
	I ob;
	ob.input(10,20);
	ob.output();
	SwapInt s;
	s.swap(ob);
	ob.output();	
	return 0;
}
