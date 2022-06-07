#include<iostream>
#include<string>
using namespace std;
const int size=4;
class item{
    private:
    int id[size];
    public:
    int price[size];
    string name[size];
   // string depart[size];
    
    void set_data();
    void display();
    float average();

};
void item :: set_data(){
    for(int i=0;i<size;i++){
        cin>>id[i]>>name[i]>>price[i];
    }
}
void item :: display(){
    for(int i=0;i<size;i++){
    cout<<id[i]<<" "<<name[i]<<" "<<price[i]<<endl;
    }
    
}
float item :: average(){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+price[i];
    }
    return sum/size;
}
int main()
{
    
    item it1,it2;
    cout<<showpoint;
    cout<<"enter item1:"<<endl;
    it1.set_data();
    cout<<"\nenter item2:"<<endl;
    it2.set_data();
    cout<<"\nitem 1:"<<endl;
    it1.display();
    cout<<"average: "<<it1.average();
    cout<<"\n\nitem 2:"<<endl;
    it2.display();
    cout<<"average: "<<it2.average();
    return 0;
}
