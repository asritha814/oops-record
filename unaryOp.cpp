#include<iostream>
using namespace std;
class unaryOp
{
    int x,y,z;
    public:
    unaryOp()
    {
        x=0;
        y=0;
        z=0;
    }
    unaryOp (int a, int b,int c)
     {
        x=a,y=b,z=c;
     }
    void display()
    {
        cout<<"\n\n\t"<<x<<" "<<y<<" "<<z;
    }
        void operator-();
  };
    void unaryOp::operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    int main()
    {
        unaryOp un(90,-70,20);
        cout<<"\n Number are :";
        un.display();
        -un;
        cout<<"\n Numbers after overloaded minus(-) operator:";
        un.display();
        return 0;
    }

    
    
