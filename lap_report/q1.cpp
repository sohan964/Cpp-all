#include <iostream>

using namespace std;
class COMPLEX{
    int value;
    public:
    COMPLEX();
    COMPLEX(int a);
    COMPLEX operator +(COMPLEX s);
    friend void display(COMPLEX s);//the friend function
    ~COMPLEX(){}
};
COMPLEX::COMPLEX(){
    value=0;
}
COMPLEX::COMPLEX(int a){
    value=a;
}
COMPLEX COMPLEX::operator +(COMPLEX s){
    COMPLEX temp;
    temp.value=value+s.value;
    return temp;
}
void display(COMPLEX s){//friend function
    cout<<s.value<<endl;
}

int main()
{
    cout<<"Enter two complex number: ";
    int n1,n2;
    cin>>n1>>n2;
    COMPLEX obj1(n1),obj2(n2),obj3;
    obj3=obj1+obj2;
    display(obj3);//the friend calling

    return 0;
}
