//without the use of end of file function
/*#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  string a;
  ofstream out("final.txt");
  cout<<"enter the string\n";
  cin>>a;
  out<<a;
  out.close();

    string b;
  ifstream in("final.txt");
  getline(in,b);
  cout<<"this"<<endl;
  cout<<b;
  out.close();
  return 0;
}
*/


//with the use of the end of file function
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("test1.txt");

    string c,d;
    cout<<"enter an string\n";
    cin>>c;
    out<<c;
out<<"this\n ";
out<<"is\n";
out<<"to \n";
out<<"test\n";

    out.close();




    ifstream in;
    in.open("test1.txt");

    while(in.eof()==0);
    {

    getline(in,d);
    cout<<d;
    }
    in.close();
    return 0;



}
