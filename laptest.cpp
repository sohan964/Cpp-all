#include <iostream>
#include<string>

using namespace std;
const int s=2;
class cart{
    string ProductName[s];
    int ProductQuantitis[s];
    int Price_per_Unit[s];
  public:
    string Customer_Name;
    void getinfo(string cname,string pname,int pquantiti,int pprise);
    int TotalAmount();
};
void cart::getinfo(string cname,string pname[s],int pquantiti[s],int pprise[s]){
    Customer_Name=cname;
    for(int i=0;i<s;i++){
        ProductName[i]=pname[i];
        ProductQuantitis[i]=pquantiti[i];
        Price_per_Unit[i]=pprise[i];
    }
}
int cart::TotalAmount(){
    int total;
    for(int i=0;i<s;i++){
       total= Price_per_Unit[i]*ProductQuantitis[i];
    }
    return total;
}

int main()
{
    cart c1;
    c1.getinfo("Saadman",)

    return 0;
}
