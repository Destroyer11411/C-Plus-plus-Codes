#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st1="hello boiz 1";
    ofstream out("sample.txt");
    out<<st1;

    string st2;
    ifstream in("sampleb.txt");
    getline(in, st2);
    cout<<st2;
    return 0;

}