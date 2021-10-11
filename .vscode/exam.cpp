//constructor//
// #include<iostream>
// using namespace std;


// class test
// {
//     public:
//     int a;
//     int b;

//     test()
//     {
//         a=10;
//         b=20;
//     }

// };

// int main()
// {
//     class test t;
//     cout<<t.a<<endl<<t.b;
// }

/*
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="HELLO";

    ofstream out("exam1.txt");
    out<<st;


   struct st2;

   ifstream in("get.txt");
   getline(in,st2);

   cout<<st2;
   return 0;

    
}
*/

/*
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream out("INVTRY");
    // if(!out)
    // {
    //     cout<<"cannot open file\n";
    // }

    // out<<"radio"<<46.56<<endl;
    // out<<"toaster"<<46.34<<endl;
    // out<<"mixer"<<78.89<<endl;

    // out.close();


    ifstream in("INVTRY");

    char item[20];
    float cost;

    in>>item>>cost;
    cout<<item<<"\t"<<cost<<endl;

    in>>item>>cost;
    cout<<item<<"\t"<<cost<<endl;

    in>>item>>cost;
    cout<<item<<"\t"<<cost<<endl;



    in.close();

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

class time
{
    private:
    int id=12;
    char name[10]="Rakesh_R";
    public:

    void getdata()
    {
        cout<<"the entered data is"<<id<<endl<<name<<endl;
    }


};

 

int main()
{
    class time r;
    r.getdata();
}
*/

/*
#include<iostream>
using namespace std;

class visitors
{
    private:
    int id;
    char name[30];

    public:
    void getdata();
    void showdata();
};

void visitors::getdata()
{
    cout<<"enter the id and the name of the visitors\n";
     cin>>id;
     cin>>name;
      
}

void visitors::showdata()
{
    cout<<"the entered data is\n";
    cout<<id<<endl;
    cout<<name<<endl;

}

int main()
{
    class visitors v;
    v.getdata();
    v.showdata();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

class constructor
{
    public:
    int a;
    int b;

    constructor()
    {
        a=19;
        b=20;

    }
};


int main()
{
    constructor c;
    cout<<c.a<<endl;
    cout<<c.b<<endl;

}
*/

/*
#include<iostream>
using namespace std;

int overload(int i);
double overload(double i);
long overload(long i);

int main()
{
    cout<<overload(3)<<endl;
    cout<<overload(33.56)<<endl;
    cout<<overload(3l)<<endl;
}


int overload(int i)
{
    cout<<"from int"<<i<<endl;
    return i;
}

double overload(double i)
{
    cout<<"from double"<<i<<endl;
    return i;
}

long overload(long i)
{
    cout<<"from long"<<i<<endl;
    return i;
}
*/
/*
//friend function//

#include<iostream>
using namespace std;

class test
{
    public:
    int a;
    int b;

    test()
    {
        a=10;
        b=20;
    }

    friend int sum(test);
};

int sum(test t)
{
    int e;
    e=t.a+t.b;
    return e;
}

int main()
{
    test e;
    cout<<"the sum of the numbers is"<<endl;
    cout<<sum(e)<<endl;
}
*/

/*
//inline function//
#include<iostream>
using namespace std;

inline int ret(int a,int b)
{
    return a,b;
}

int main()
{
    cout<<ret(20,30);
}
*/

/*
//static member//

#include<iostream>
using namespace std;

class test
{
    static int a;
    int b;

    public:

    void set(int i,int j) {a=i,b=j;}

    void show();
};

void test::show()
{
    cout<<"the static a"<<a<<endl;
    cout<<"non static b"<<b<<endl;
}



// void test::set(int i,int j)
// {
//    a=i;
//    b=j;
// }


int main()
{
     test t1,t2;
    t1.set(1,1);
    t1.show();

    t2.set(2,2);
    t2.show();

    t1.show();
}
*/

/*
//without refrence//
#include<iostream>
using namespace std;

int neg(int *i);

int main()
{
    int i;
    i=10;
    cout<<"the negated is\n";

    neg(&i);
    cout<<i;
    return 0;
}

int neg(int *i)
{
    *i=-*i;
    return *i;
     
}
*/

/*
//using refrences//

#include<iostream>
using namespace std;

int neg(int &i);

int main()
{
    int x;
    cout<<"enter the value of the x\n";
    cin>>x;
    cout<<"using the refrences\n";
    cout<<"the negation of the x is\n";
    neg(x);
    cout<<x;
    return 0;
}

int neg(int &i)
{
    i=-i;
    return i;
}
*/

//dynamically allocating the memory//
/*
#include<iostream>
#include<new>
using namespace std;

int main()
{
    int *p;

    try{
        p=new int;
    } catch(bad_alloc xa){
        cout<<"the allocation failed\n";
        return 1;

    }

    *p=100;
    cout<<"the value of the variable is"<<*p<<endl;
    delete p;
}
*/


/*
//constructors initilization//

#include<iostream>
using namespace std;

class num
{
    int a;
     public:
     num(){
         a=0;
     }
     num(int t)
     {
         a=t;
     }
     void getdata()
     {
         cout<<"the entered data is"<<a<<endl;

     }
};

int main()
{
    num x,y,z(45);
    x.getdata();
    y.getdata();
    z.getdata();
}
*/


//function overloading//
/*
#include<iostream>
using namespace std;

void volume(int ,int );
void volume(int ,int ,int );
void volume(int );

int main()
{
    int a,b,c,d,e,f;
    cout<<"enter the radius and height of the sphere\n";
    cin>>a>>b;
    volume(a,b);

    cout<<"enter the sides value of the cube\n";
    cin>>c;
    volume(c);

    cout<<"enter length and breadth and height of the cuboid\n";
    cin>>d>>e>>f;
    volume(d,e,f);


}

void volume(int a)
{
    int y;
    y=a*a*a;

    cout<<"the volume of the cube is "<<y<<endl;
    
}

void volume (int a,int b)
{
    int x;
    x=a*b*3.14;
    cout<<"the volume of the sphere is"<<x<<endl;
}

void volume(int a,int b,int c)
{
    int o;
    o=a*b*c;
    cout<<"the volume of the cuboid is"<<o<<endl;
}
*/

/*
//operator overloaading//

#include<iostream>
using namespace std;

class test
{
    int a;

    public:
    void get()
    {
        cin>>a;
    }

    void operator % (test r)
    {
        int z;
        z=a+r.a;
        cout<<"the sum of the numbers is\n";
        cout<<z;
    }
};

int main()
{
    test y,n;
    cout<<"enter the first element\n";
    y.get();

    cout<<"enter the second element\n";
    n.get();

    y%n;

}
*/

/*
#include<iostream>
using namespace std;

class test
{
    public:
    int a;
    double b;

    void func(int a)
    {
        cout<<"printing the int ";
        cout<<a<<endl;
    }

    void func(double a)
    {
        cout<<"printing the double ";
        cout<<a<<endl;
    }
};

int main()
{
    test t;
    t.func(1);
    t.func(3.67);
}
*/

// #include <iostream>
// using namespace std;

// class Complex
// {
//     private:
//       float real;
//       float imag;
//     public:
//        Complex(): real(0), imag(0){ }
//        void input()
//        {
//            cout << "Enter real and imaginary parts respectively: ";
//            cin >> real;
//            cin >> imag;
//        }

//        // Operator overloading
//        Complex operator - (Complex c2)
//        {
//            Complex temp;
//            temp.real = real + c2.real;
//            temp.imag = imag + c2.imag;

//            return temp;
//        }

//        void output()
//        {
//            if(imag < 0)
//                cout << "Output Complex number: "<< real << imag << "i";
//            else
//                cout << "Output Complex number: " << real << "+" << imag << "i";
//        }
// };

// int main()
// {
//     Complex c1, c2, result;

//     cout<<"Enter first complex number:\n";
//     c1.input();

//     cout<<"Enter second complex number:\n";
//     c2.input();

//     // In case of operator overloading of binary operators in C++ programming, 
//     // the object on right hand side of operator is always assumed as argument by compiler.
//     result = c1 - c2;
//     result.output();

//     return 0;
// }



// overloading an operator to add two complex number
/*
#include<iostream>
using namespace std;

class complex
{
    public:
    int rel;
    int img;

    complex()
    {
        rel=0;
        img=0;
    }

    void input()
    {
        cout<<"enter the real part\n";
        cin>>rel;

        cout<<"enter the imaginary part\n";
        cin>>img;
    }


    void operator , (complex c)
    {
        rel=rel+c.rel;
        img=img+c.img;

        cout<<"the sum of the given complex number is"<<rel<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2;

    cout<<"enter the first complex numbers\n";
    c1.input();

    cout<<"enter the second complex number\n";
    c2.input();

    c1 , c2;

    return 0;
}
*/

// #include<iostream>
// using namespace std;

// class test
// {
    
//     public:
//     static int a;
//     static int b;
    

//     void set(int x,int y) {a=x,b=y;}

//     void get()
//     {
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }



// };

// int test::a;

// int test::b;




// int main()
// {
//     test t1,t2;

//     t1.set(1,1);
//     t1.get();

//     t2.set(2,2);
//     t2.get();

//     t1.get();
// }


/*
//basic inheritance//
//granting access//
 #include<iostream>
 using namespace std;

 class base 
 {
     public:
     int a;
 };

 class derived:private base
 {
     public:
     int b;
     base::a;
 };

 int main()
 {
     derived d;
     d.a=10;
     d.b=20;

     cout<<d.a<<endl;
     cout<<d.b<<endl;
 }
*/


/*
#include<iostream>
 using namespace std;

 class base1 
 {
     public:
     int a;
 };

 class base2
 {
     public:
     int c;

 };

 class derived:public base1,public base2  //for every inheritance you need to specify public,private or protected 
 {
     public:
     int b;
 };

 int main()
 {
     derived d;
     d.a=10;
     d.b=20;
     d.c=30;

     cout<<d.a<<endl;
     cout<<d.b<<endl;
     cout<<d.c<<endl;
 }
*/


/*
//virtual function//

#include<iostream>
using namespace std;

class base 
{
    public:
    virtual void func()
    {
        cout<<"this is from the base\n";
    }
};

class derived1:public base
{
    public:
    void func()
    {
        cout<<"this is from the derived 1\n";
    }
};

class derived2:public base
{
    public:
     void func()
     {
         cout<<"this is from the derived 2\n";
     }
};

int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;

    p=&b;

    p->func();

    p=&d1;
    p->func();

    p=&d2;
    p->func();
}
*/


/*
//basic exception handling//
#include<iostream>
using namespace std;

int main()
{
    int a,b;

    try{
        cout<<"enter two numbers\n";
        cin>>a>>b;

        if(b==0) throw 0;
        cout<<"the division is"<<a/b<<endl;
    }

    catch (int r)
    {
        cout<<"the division is not possible\n";
    }
}
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    try{
        cout<<"enter anything \n";
        cin>>a;
        cin>>b;

        if(a==isalpha()) throw 'a';

        if(b==isdigit()) throw 2;

        cout<<"entered data is"<<a<<endl<<b<<endl;
    }

    catch(int r)
    {
        cout<<"the entered is an integer\n";
    }

    catch(char e)
    {
        cout<<"the char is entered\n";
    }
}