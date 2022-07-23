#include <iostream>
#include<string>
using namespace std;

class TechProduct{
private:
    string OS;
    string Mobo;
    int memory;
  
  public:
    TechProduct(string os,string mobo,int m){
        OS=os;
        Mobo=mobo;
        memory=m;
    }
    void display_t(){
        cout<<OS<<" "<<Mobo<<" "<<memory<<" ";
    }
};

class Computer:protected TechProduct{
    private:
        int no_of_components;
        string cpu;
    protected:
        //display_t()
    public:
        Computer(string os,string mobo,int mem,int noc,string c): TechProduct(os,mobo,mem){
            no_of_components=noc;
            cpu=c;
        }
        void display_c(){
            display_t();
            cout<<no_of_components<<" "<<cpu<<" ";
        }
};

class Laptop:public Computer{
    private:
        int weight;
        float display_size;
    protected:
        // display_t()
    public:
    //display_c()
    Laptop(string os,string mobo,int mem,int noc,string cpu,int w,float dis) : Computer(os,mobo,mem,noc,cpu){
        weight=w;
        display_size=dis;
    }
    void display_l(){
        display_c();
        cout<<weight<<" "<<display_size<<endl;
    }
};

int main()
{
    Laptop l1("Windows","Gigabyte",8,1,"Dell",2,15.6);
    l1.display_l();

    return 0;
}
