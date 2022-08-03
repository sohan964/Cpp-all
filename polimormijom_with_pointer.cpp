#include <iostream>

using namespace std;

class item{
    private:
        int id,price;
    public:
    void getInfo(int i,int p){
        id=i;
        price=p;
    }
    void display(){
        cout<<"id is "<<id<<endl;
        cout<<"price is "<<price<<endl;
    }
};

class Laptop : public item{
    private:
        string brand;
    public:
        void getInfo_L(int id, int price, string b){
            getInfo(id,price);
            brand=b;
        }
        
        void display_L(){
            display();
            cout<<"Item brand is : "<<brand<<endl;
        }
};
int main()
{
    Laptop it1;
    Laptop *ptr=&it1;
    //
    (*ptr).getInfo_L(344,60,"DELL");
    //we can write ptr-> without *ptr
    // that's means (*ptr) and ptr-> is same.
    ptr->display_L();

    return 0;
}
