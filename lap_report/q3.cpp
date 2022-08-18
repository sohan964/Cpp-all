#include<bits/stdc++.h>
using namespace std;
class Friend{
    int number;
    public:
    list<string> numbers;
    Friend(){
        for(int i=0;i<2;i++){
            cout<<"enter number:"<<i+1<<endl;
            string number;
            cin>>number;
            numbers.push_back(number);
        }
    }
    void display(){
        cout<<"both Numbers:"<<endl;
        for(auto u:numbers) cout<<u<<endl;
    }
};
int main(){
    Friend obj1;
    obj1.display();
}
