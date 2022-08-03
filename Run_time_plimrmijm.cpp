#include <iostream>

using namespace std;

class A{
    public:
        int a=2;
        //if we are not make it virtual then it will print the value of class A
        virtual void display(){
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
    
    A *ptr;
    ptr=&b; //it will call the B class value
    ptr->display();//b=6
    return 0;
}
