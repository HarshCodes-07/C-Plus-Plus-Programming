#include<iostream>
using namespace std;

class Store{
	
	
	public:
		
	int x;
		static int  total;
		void input(){
			cin>>x;
		}
		
		friend void sum(Store &x);
		
		void display();
}; 

void  sum(Store &x){
	Store s;
	s.total = s.total  + x.x;
}

void Store::display(){
	cout<<"sum of all data member  of object : "<<total<<endl;
}
int Store::total =0;


int main(){
	int t,i;
	cout<<"enter the array length : ";
	cin>>t;
	Store array[t];
	Store s;
	
	for(i=0;i<t;i++){
		array[i].input();
	}
	
	for(i=0;i<t;i++){
		//int l;
		//l = array[i];
		//s.sum(l);
		sum(array[i]);
}
	
	s.display();
	
	return 0;
}
