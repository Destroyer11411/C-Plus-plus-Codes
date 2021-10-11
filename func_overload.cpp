#include<iostream>
using namespace std;

inline int volume(int &a,int &b)
{
    return(3.14*a*a*b);
}

inline int volume(int a,int b,int c)
{
    return(a*b*c);
}

inline int volume(int a)
{
    return(a*a*a);

}

int main()
{
    int a=5,b=7;
   // cout<<"enter the radius and height of the sphere\n";
    
    cout<<"the volume of the sphere with radius "<<a<<"and height "<<b<<"is:"<<volume(a,b)<<endl;
    cout<<"the volume of the cuboid is"<<volume(5,8,4)<<endl;
    cout<<"the volume of the cube is"<<volume(4)<<endl;

    
}