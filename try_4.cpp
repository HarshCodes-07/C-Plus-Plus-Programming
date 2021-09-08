#include<iostream>
using namespace std;
void divide(double x,double y){
	cout<<"\nInside Fucntion";
	try{
		if(y==0){
			throw y;
		}else{
			cout<<"\n"<<x/y;
		}
	}catch(double p){
		throw;
	}
	cout<<"\nEnd of Function";
}
int main(){
	cout<<"\nInside Main";
	try{
		divide(10.5,2.0);
		divide(2.0,0.0);
	}catch(double q){
		cout<<"\nException Caught";
		cout<<"\nEnd of Main";
	}
}
