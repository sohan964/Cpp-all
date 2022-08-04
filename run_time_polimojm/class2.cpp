#include<bits/stdc++.h>
using namespace std;

class Book_Store{
protected:
    int id,price;
public:
    Book_Store(int i,int p){
        id=i;
        price=p;
    }
    virtual void display(){cout<<"Base Class";}
};

class Books : public Book_Store{
protected:
    // id,price
    int pages;
public:
    //display()
    Books(int id,int price,int pag):Book_Store(id,price){
        pages=pag;
    }
    void display(){
       cout<<"Book Id: "<<id<<endl;
       cout<<"Book Price: "<<price<<endl;
       cout<<"Book Pages: "<<pages<<endl;
    }
};

class Audio_Tape : public Book_Store{
protected:
    // id,price
    int length;
public:
    //display()
    Audio_Tape(int id,int price,int l):Book_Store(id,price){
        length=l;
    }
    void display(){
       cout<<"Audio Tape Id: "<<id<<endl;
       cout<<"Audio Tape Price: "<<price<<endl;
       cout<<"Audio Tape Length: "<<length<<endl;
    }
};

int main()
{
    Book_Store *ptr,*ptr2;

    Books b1(3434,600,1500);
    Audio_Tape at1(34,800,5);

    ptr=&b1;  //&at1
    //ptr2=&at1;

    ptr->display();
    //ptr2->display();

    return 0;
}
