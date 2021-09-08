#include<iostream>
using namespace std;
float volume(float r)
{
        return(4/3 * 3.14 *r*r*r);
}
float volume(float r,float h)
{
        return(3.14*r*r*h);
}
float volume(int l,int b,int h)
{
        return (l * b * h);
}
int main(){
			float r;
			cout<<"\nEnter the radius : ";
			cin>>r;
			cout<<"\nVolume of Sphere = "<<volume(r);
			float r1,h1;
			cout<<"\nEnter the radius and hieght : ";
			cin>>r1>>h1;
			cout<<"\nVolume of Cyclinder = "<<volume(r1,h1);
			float l2,b2,h2;
			cout<<"\nEnter the length , base  and hieght : ";
			cin>>l2>>b2>>h2;
			cout<<"\nVolume of Cuboid = "<<volume(l2,b2,h2);
	}
