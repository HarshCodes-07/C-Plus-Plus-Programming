// Dynamic Constructor
#include<iostream>
#include <cstring>
using namespace std;
class ST{
	char *s;
	int size;
	public :
		ST(char *);
		~ST();
		void display(ST ob1){
			cout<<s<<ob1.s;
		}
};
ST::ST(char *c){
	size=strlen(c);
	s=new char[size+1];
	strcpy(s,c);
};
ST::~ST(){
	delete []s;
};
int main(){
	ST ob("Harsh");
	ST ob1(" Dwivedi");
	ob.display(ob1);
	return 0;
}
