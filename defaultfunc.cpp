#include<iostream>
using namespace std;

int volume(int r,int h,double p=3.14)
{
    return (p*r*r*h);
}

int main()
{
    int r,h;
    cout<<"enter the radius and height of the sphere\n";
    cin>>r>>h;
    cout<<"the volume of the sphere with radius: "<<r<<" and height: "<<h <<" is "<<volume(r,h)<<endl;
}