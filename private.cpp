#include<iostream>
using namespace std;
class Cube{
	private:
	void volume();
	int x,y,z;
	public:
		int calvolume(){
			cout<<volume()<<endl;
		}
		int volume(){
			return x*y*z;
		}
		void input(){
			cin>>x>>y>>z;
		}
};
int main(){
	Cube c;
	c.input();
	c.calvolume();
	return 0;
}
