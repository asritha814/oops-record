#include<iostream>
using namespace std;
class Complex
{
    private:
    float real,image;
    public:
    Complex(float r=0, float i=0)
    {
         real = r;
         image = i;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.image = image+c.image;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<image<<"i"<<endl;
    }
};
int main()
{
    Complex C1(5,6),C2(3,7);
    Complex C3;
    C3 = C1.add(C2);
    cout<<"First Complex number:";
    C1.display();
    cout<<"Second Complex number:";
    C2.display();
    cout<<"Sum of the two Complex numbers:";
    C3.display();
    return 0;
}
