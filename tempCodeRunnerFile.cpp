include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("INVNTRY");

    if(!in)
    {
        cout<<"cannot open the file\n";
        return 1;
    }

    char item[20];
    float cost;

    in>>item>>cost;
    cout<<item<<cost<<endl;
    in>>item>>cost;
    cout<<item<<cost<<endl;
    in>>item>>cost;
    cout<<item<<cost<<endl;

    in.close();
    return 0;





}