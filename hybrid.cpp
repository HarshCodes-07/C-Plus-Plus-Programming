#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
		public:
		void getRoll(int x){
			roll=x;
		}
};
class Test:public Student{
	protected:
		int mark1,mark2;
		public:
		void getmarks(int x,int y){
			mark1=x;mark2=y;
		}
};
class Sports{
	protected:
		int score;
		public:
		void getScore(int x){
			score=x;
		}
};
class Result:public Test,public Sports{
	protected:
		int total;
		public:
		void display(){
			total=mark1+mark2+score;
			cout<<"\nROLL : "<<roll;
			cout<<"\nTOTAL : "<<total;
		}
};
int main(){
	Result r;
	r.getRoll(607);
	r.getmarks(88,91);
	r.getScore(80);
	r.display();
}
