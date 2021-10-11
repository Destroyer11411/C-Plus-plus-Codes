// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"enter the value of a and b\n";
//     cin>>a>>b;
//     cout<<"the entered value of a="<<a<<"\n the value of b is="<<b;
// }

// #include<iostream>
// using namespace std;

// class student
// {
//     private:
//     int sno;

//     public :
//     int sid;
//     int sage;

//     void setdata();
//     void getdata();

  

    
// }s;

// void student::setdata()
// {
//     cout<<"enter the data of the students\n";
//     cin>>s.sno;
//     cin>>s.sid;
//     cin>>s.sage;

// }

// void student::getdata()
// {
//     cout<<"the entered data is"<<endl;
//     cout<<"student number\n";
//     cout<<s.sno;
//     cout<<"\nstudent id\n";
//     cout<<s.sid;
//     cout<<"\nstduent age\n";
//     cout<<s.sage;
// }

// int main()
// {
//     class student c;
//    s.setdata();

//    s.getdata();

//      cout<<"ascessing from th outside the program"<<endl;
//     cin>>c.sid;
//     cin>>c.sage;
//     //cin>>c.sno;
//     cout<<c.sid;
//     cout<<c.sage;
//     //cout<<c.sno;

//    return 0;
// }

/*
//function overloading
#include<iostream>
using namespace std;

int volume(int a,int b); 
int volume(int a,int b,int c); 
int volume(int a); 

int main()
{
    int a,b,c,d,e,f,r1,r2,r3;

    cout<<"enter the value of radius and height of the sphere\n";
    cin>>a>>b;
    r1=volume(a,b);
    cout<<"the volume of the sphere is="<<r1<<endl;

    cout<<"enter the value of the length,breadth and height of the cuboid\n";
    cin>>c>>d>>e;
    r2=volume(c,d,e);
    cout<<"the volume of the cuboid is"<<r2<<endl;

    cout<<"enter the value of the sides of the cube\n";
    cin>>f;
    r3=volume(e);
    cout<<"the volume of the cube is"<<r3<<endl;
}

int volume(int a,int b,int c)
{
    return a*b*c;
}

int volume(int a,int b)
{
    return 3.14*a*b;

}

int volume(int a)
{
    return a*a*a;
}
*/

/*
//inheritence

#include<iostream>
using namespace std;

class parent
{
    public:
    int id_p;
};

class child:public parent
{
    public:
    int id_c;
};


int main()
{
    class child b;

    b.id_c=7;
    b.id_p=11;

    cout<<"the parent id is="<<b.id_p<<endl;
    cout<<"the child is is="<<b.id_c<<endl;

}

*/


/*
//constructors

#include<iostream>
using namespace std;

class test
{
    public :
   int a,b;

    test()
    {
        a=10;
        b=11;
    }
    


};


int main()
{
    test c;

    cout<<"a:"<<c.a<<endl<<"b:"<<c.b<<endl;
}
*/

/*
#include<iostream>
using namespace std;

class test
{
    public:
    int a,b;

    test()
    {
        a=10;
        b=11;
    }
};


int main()
{
    test c;

    cout<<"the value of a is"<<c.a<<endl;
    cout<<"the value of b is"<<c.b<<endl;
}
*/


//static variable
/*
#include<iostream>
using namespace std;

class shared
{
   
    static int a;
    int b;
    public: 

    void set(int ,int);
    void show();
};

int shared::a;

void shared:: set(int x,int y)
{
    a=x;
    b=y;
}

void shared:: show()
{
    cout<<"this is static a"<<a<<endl;
    cout<<"this is non static b"<<b<<endl;

}

int main()
{
    shared x,y;
    x.set(2,2);
    x.show();
    y.set(1,1);
    y.show();
    x.show();
}

*/


/*
//array of objects

#include<iostream>

using namespace std;

class cl
{
    int i;

    public:
    void set(int );
    int get();
};


void cl::set(int y)
{
    i=y;
}


int cl::get()
{
    
    return i;
}

int main()
{
    cl b[3];
    int i;


    for(i=0;i<3;i++)
    {
        b[i].set(i+1);
    }

    for(i=0;i<3;i++)
    {
        b[i].get();
    }
}

*/


/*
//OPERATOR OVERLOADING
//overloading + function to check the numbers are equal or not//
#include<iostream>
using namespace std;

class test
{
    int a;

    public :
    void get()
    {
        cin>>a;

    }


    void operator + (test t2)
    {
        if(a==t2.a)
        
            cout<<"equal\n";
        

        else
        
            cout<<"not equql\n";

        
}
};


int main()
{
    test t1,t2;

    cout<<"enter the number of a\n";
    t1.get();

    cout<<"enter the number of second a\n";
    t2.get();

    t1+t2;
}
*/


//overloading the , operator to add two numbers//

  
//   #include<iostream>
//   using namespace std;

//   class addn
//     {
//         int a;

//         public:
//         void get();
//         void show();
   
//         void operator , (addn t1)
//         {
//             cout<<"\nadding the numebrs........\n";
//             int b;
//             b=a+t1.a;
//             cout<<"the sum of the two numbers is\n";
//             cout<<b;
//         }


   
   
//     };


//     void addn::get()
//     {
//         cout<<"enter the numbers to be added in\n";
//         cin>>a;
//     }

//     void addn::show()
//     {
//         cout<<"\nthe entered numbers are\n";
//         cout<<a;
//     }
 

//  int main()
//  {
//      addn a1,a2;

//      a1.get();
     
//      a2.get();

//      a1.show();

//      a2.show();

//      a1 , a2;
//  }

/*
#include<iostream>
using namespace std;


class add
{
    int a;

    public:
    void get();
    void show();

    void operator & (add r)
    {
        int p;
        cout<<"\nadding the numbers.......\n";
        p=a+r.a;
        cout<<"the sum of the number is ="<<p<<endl;


    }
};


void add::get()
{
    cout<<"enter the number \n";
    cin>>a;

}


void add::show()
{
    cout<<"the entered numbers are\n";
    cout<<a;
}


int main()
{
    add a1,a2;


    a1.get();
    a2.get();


    a1.show();
    a2.show();

    a1&a2;
}
*/



/*
// overloading for multiplication//
#include<iostream>
using namespace std;

class mul
{
    int a;

    public:
    void set();
    void show();

    void operator + (mul t)
    {
        int p;
        p=a*t.a;

        cout<<"the product of the two number is="<<p<<endl;
    }
};

void mul::set()
{
  cout<<"enter the value of the number\n";
  cin>>a;
}


void mul::show()
{
    cout<<"the entered data is \n";
    cout<<a;
}



int main()
{
    mul m1,m2;

    m1.set();
    m2.set();

    m1.show();
    m2.show();

    m1+m2;
}
*/ 

/*
#include<iostream>
using namespace std;

class add
{
    int i;

    public :
      void fuck();
      void you();

    //   return_type operator(key word)  # (add t)
      
    //   {
    //       int p;
    //       p=i+t.i;
    //       cout<<"the addition of the two number is"<<p<<<endl;
    //   }
    // 

   int operator & (add t)
   {
       int o;
       o=i+t.i;
       return o;
   }

// void operator & (add t)
// {
//     int p;
//     p=i+t.i;

//     cout<<"the addition of the numbers is "<<p<<endl;
// }


};


void add::fuck()
{
    cout<<"\nenter the numbers\n";
    cin>>i;
}

void add::you()
{
    cout<<"\nthe entered number is\n";
    cout<<i;
}



int main()
{
   add t1,t2;
   int r;

   t1.fuck();
   t2.fuck(); 

   t1.you();
   t2.you();


   r=t1&t2;
   cout<<"the sum is "<<r<<endl;
}
*/


/*
//INHERITANCE

#include<iostream>
using namespace std;

class base
{
    int a,b;

    public:
    void set(int i,int j)
    {
      a=i;
      b=j;   
    }

    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

class derived:public base
{
    int x;

    public:
     derived(int k)
    {
        x=k;
    }

    void showk()
    {
        cout<<x<<endl;
    }
};


int main()
{
    derived g(3);

    g.set(1,4);
    g.show();
    g.showk();

    return 0;
}
*/


//MULTILEVEL INHERITANCE//

#include<iostream>
using namespace std;

class base1
{
    protected:
    int a;

    public:
    void showa()
    {
        cout<<"the value of base class 1 is "<<a<<endl;
    }

};

class base2
{
    protected:

    int b;

    public:
    void showb()
    {
        cout<<"the value in the base class 2 is "<<b<<endl;
    }
};

class derived:public base1,public base2
{
    public :
    void set(int i,int j)
    {
        a=i;
        b=j;
    }
};

int main()
{
    derived ob;

    // ob.set(4,8);
    // cout<<"giving the base class value as 4"<<endl;
    // cout<<"and"<<endl;
    // cout<<"giving the base class value as 8"<<endl;
    // cout<<endl;

    int e,g;

    cout<<"enter the base class 1 value"<<endl;
    cin>>e;

    cout<<"enter the base class 2 value"<<endl;
    cin>>g;

    ob.set(e,g);
    ob.showa();
    ob.showb();
}







      

       
      

      



