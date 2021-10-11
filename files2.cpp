//program to write into the file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("INVNTRY");
    if(!out)
    {
        cout<<"cannot open the file\n";
        return 0;
    }

    out<<"radios"<<39.80<<endl;
    out<<"toaster"<<78.45<<endl;
    out<<"oven"<<54.24<<endl;
    out.close();
    return 0;
}