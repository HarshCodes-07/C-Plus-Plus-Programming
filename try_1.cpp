#include<iostream>
using namespace std;
int main(){
	cout<<"\nEnter a and b :";
	int a,b;
	cin>>a>>b;
	int x=a-b;
	try{
		if(x!=0)
		cout<<"\nResult a/x :"<<a/x;
		else{
			throw x;
		}
	}
	catch(int i){
		cout<<"\nException Caught";
	}
	return 0;
}
