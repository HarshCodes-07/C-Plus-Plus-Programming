#include<iostream>
using namespace std;
class BC{
	public :
		int b;
		 void show(){
			cout<<"\nb="<<b;
		}
};
//INHERITENCE
class DC:public BC{
	public :
		int d;
		//FUCNTION OVERRIDING
		void show(){
			cout<<"\nb="<<b<<"\nd="<<d<<"\n";
		}
};
int main(){
	BC *bptr;
	BC ob1;
	bptr=&ob1;
	bptr->b=10;
	// Calls 1st one due to data type of pointer ie ; BC
	bptr->show();
	DC ob2;
	bptr=&ob2;
	bptr->b=20;
	// Calls 1st one due to data type of pointer ie ; BC
	bptr->show();
	DC *dptr;
	dptr=&ob2;
	dptr->d=50;
	// Calls 2nd one due to data type of pointer ie ; DC
	dptr->show();
	return 0;
}
