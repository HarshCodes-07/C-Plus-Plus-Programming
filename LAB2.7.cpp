#include<iostream>
#include<cmath>
using namespace std;
class point
{
    public:
    int x,y;
     void in()
     {
     	cout<<"\nEnter x and y Coordinate : ";
         cin>>x>>y;
     }
};
int main()
{
    point p[2];
    for(int i=0;i<2;i++)
     p[i].in();
     cout<<sqrt((p[0].x*p[1].x)-(p[0].y*p[1].y))<<" ";
    return 0; 
}
