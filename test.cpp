#include<iostream>
using namespace std;

int  sum(int a,int b)
{
    cout<<"using the first function\n";
    return a+b;
}

int sum(int a,int b,int c)
{
    cout<<"using the second function\n";
    return a+b+c;
}

int main()
{
    cout<<"the sum of 4 and 5 is:"<<sum(4,5)<<endl;

    cout<<"the sum of 5,7 and 8 is:"<<sum(5,7,8)<<endl;
}
