#include<iostream>
#include<string>
using namespace std;


class samaple
{
    int x;
    
    public:
        void getVal(int a);
        void changeSign(samaple b);
        void showval();
};

void samaple::getVal(int a)
{
    x=a;
    cout<<x<<endl;
}

void samaple::changeSign(samaple b)
{
    x= -x;
    cout<<b.x<<endl;
}

void samaple::showval()
{
    cout<<x<<endl;
}


int main()
{
    
    samaple a;
    a.getVal(5);
    a.changeSign(a);
    a.showval();
}

