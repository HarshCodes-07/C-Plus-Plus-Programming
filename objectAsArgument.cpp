#include<iostream>
using namespace std;
class life{
		int mfg_year;
		int exp_year;
		int yr;
		public :
			void input(){
				cin>>mfg_year>>exp_year;
			}
			void life_period(life *);
};
void life::life_period(life *ob1){
	yr=(*ob1).exp_year-(*ob1).mfg_year;
//	yr=ob1->exp_year-ob1->mfg_year;
	cout<<yr;
}
int main(){
	life ob;
	ob.input();
	ob.life_period(&ob);
	return 0;
}
