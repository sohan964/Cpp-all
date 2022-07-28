/*
virtual class
*/

#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
        string name;
        int id;
    public:
        Person(){
            cout<<"enter name and id: ";
            cin>>name>>id;
        }
        void display_p(){
            cout<<name<<"\n"<<id<<endl;
        }
};
class Account : virtual public Person{
    protected:
        int amount;
    public:
        Account():Person(){
            cout<<"enter amount: ";
            cin>>amount;
        }
        
        void display_ac(){
            cout<<amount<<endl;
        }
};
class Admin : virtual public Person{
    protected:
        string designation;
    public:
        Admin(){
            cout<<"enter designation: ";
            cin>>designation;
        }
        
        void display_ad(){
            cout<<designation<<endl;
        }
};

class Master : public Account, public Admin{
    protected:
        string experience;
    public:
        Master():Account(),Admin(){
            cout<<"enter experience: ";
            cin>>experience;
            cout<<"\n";
        }
    void display_M(){
       display_p();
       display_ac();
       display_ad();
       cout<<experience<<endl;
    }
    
    
};

int main(){
    Master m1;
    m1.display_M();
    

    return 0;
}
