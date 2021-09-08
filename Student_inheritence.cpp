#include<iostream>
using namespace std;
class Student{
	protected :
	int Roll;
};
class Test:public Student{
	protected :
	int sub1,sub2;
};
class Result:public Test{
	protected :
	int total;
	public:
		void get(){
			cin >> Roll;
            cin >> sub1;
            cin >> sub2;
            total=sub1+sub2;
		}
		void display(){
			cout<<"\nROLL = "<<Roll;
			cout<<"\nSub 1 = "<<sub2;
			cout<<"\nSub 2 = "<<sub1;
			cout<<"\nTOTAL = "<<total;
		}
};
main(){
	Result r;
	r.get();
	r.display();
}

