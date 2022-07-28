#include<bits/stdc++.h>
using namespace std;

class Person{
protected:
    string name;

public:
    Person(){
        cout<<"enter name"<<endl;
        cin>>name;
    }
    void display(){
       cout<<name<<endl;
    }

};

class student: virtual public Person{
protected:
    int id_no;
public:
    student():Person(){
        cout<<"Enter ID: ";
        cin>>id_no;
    }
    void display_s(){
        cout<<id_no<<endl;
    }
};

class Exam : virtual public student{
protected:
     //id_no
     int sub1,sub2;
public:
    Exam():student(){
        cout<<"Enter sub1,sub2: ";
        cin>>sub1>>sub2;
    }
    void display_e(){
        cout<<sub1<<endl<<sub2<<endl;
    }
};

class Sports : virtual public student{
protected:
    //id_no
    int score;
public:
    Sports(){
        cout<<"Enter score: ";
        cin>>score;
    }
    void display_sp(){
        cout<<score<<endl;
    }
};

class Result : public Exam, public Sports{
protected:
    //id_no,sub1,sub2,score,id_no
    int total;
public:
    Result():Exam(),Sports(){
        total=sub1+sub2+score;
    }
    void display_r(){
        display();
        display_s();
        display_e();
        display_sp();
        cout<<total<<endl;
    }
};

int main()
{
    Result r1;
    r1.display_r();

    return 0;
}
