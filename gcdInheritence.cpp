#include<iostream>
using namespace std;
class A{
	protected:
	int m;
	public :
		A(int x){
			m=x;
		}
};
class B{
	protected:
	int n;
	public:
		B(int y){
			n=y;
		}
};
class C:public B,public A{
	int k;
	public:
		C(int y):A(10),B(20){
			k=y;
		}
		void display(){
			int gcd;
			for(int i=1; i <= n && i <= m; ++i)
    		{
        		if(n%i==0 && m%i==0)
            	gcd = i;
    		}
    		cout<<"G.C.D of "<<m<<" and "<<n<<" is : "<< gcd;
		}
};
main(){
	C ob(10);
	ob.display();
}
