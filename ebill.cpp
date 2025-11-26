#include<iostream>
using namespace std;
class b
{
    private:
    int current units,customerid;
    float amount;
    char name[50];
    public:
    void get detalis();
    void compute bill();
    void print bill();
};
void eb::get data()
{
    cout<<"Enter customerid";
    cin>>customerid;
    cout<<"Enter amount of units consumed";
    cin>>units;
    cout<<"Enter customer name";
    cin>>customer name;
}
void eb::compute()
{
    if (units<=100)
    amount=0;
else if(units<=200)
amount=(units-100)*2.25;
else if(units<=400)
amount(100*2.25)+(unit-200)*4.5;
else if(units<=600)
amount=(100*2.25)+(200*4.25)+9unit-4000)*600;
else if (units>600)
amount=(100*2.25)+(200*4.45)+(200*6)+(unit-600)*9;
}
void eb:proint()
{
    cout<<"electricity bill"<<endl;
    cout<<" customeried"<<customeried<<endl;
    cout<<"name"<<name;
    cout<<"units"<<unoits;
    cout<<"amount"<<amount;
}
int main()
{
    eb e1;
    e1.getdata();
    e1.compute bill();
    e1.print bill();
}
