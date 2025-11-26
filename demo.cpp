#include<iostream>
 using namespace std;
 class Complex
{
    private:
    int a,b;
    public:
    Complex()
{

}
    void getvalue()
    {
        cout<<"Enter the two numbers:";
        cin>>a>>b;
    }

    void display()
    {
        cout<<" + \t"<<b<<"i"<<endl;
    }
    Complex operator ++(int)
    {
        Complex temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
    }
    Complex operator --(int)
    {
        Complex temp;
        temp.a = a--;
        temp.b = b--;
        return temp;
    }
};
int main()
{
    Complex obj;
    obj.getvalue();
    obj++;
    cout<<"Increament complex number \n";
    obj.display();
    obj--;
    cout<<"Decreament complex number \n";
    obj.display();
    return 0;
}
