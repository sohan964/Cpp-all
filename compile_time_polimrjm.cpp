#include <iostream>

using namespace std;

class A{
    public:
        int a=2;
        void display(){
            cout<<"Value of a in class A is "<<a<<endl;
        }
};

class B : public A{
    public:
        int b=6;
        void display(){
            cout<<"Value of b in class B is "<<b<<endl;
        }
};

int main()
{
    B b;
    B *ptr=&b;
    ptr->display();//it will call the display of the class B.
    
    //here the both class display name is same.
    ptr->A::display();//but it will call the display of the class A
    //it's call compile time polimormijom

    return 0;
}
