#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream fout("testing.txt");
    string a;

    cout<<"enter the string you want to enter to the file\n";
    cin>>a;

    fout<<a;
    fout.close();
    string b;
    ifstream fin("testing.txt");
    

    getline(fin,b);
    cout<<"the entered string is:"<<endl;
    cout<<b;
    fin.close();
    

    return 0;   

}