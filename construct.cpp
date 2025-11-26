#include<iostream>
using namespace std;
class student{
    private:
    int value;
    public:
    student(int s){
        value=s;
        cout<<"constructor called: is value set to"<<value<<endl;
    }
    ~student(){
        cout<<"constructor called: value is to "<<value<<endl;
    }
    void display(){
        cout<<"value:"<<value<<endl;
    }
};
int main(){
    cout<<"creating object d1"<<endl;
    student d1(15);
    d1.display();
    cout<<"creating on=bject d2"<<endl;
    student d2(30);
    d2.display();
    cout<<"end of, main function"<<endl;
    return 0;
}
