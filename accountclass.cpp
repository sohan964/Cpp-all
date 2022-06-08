
#include <iostream>
#include<string>
using namespace std;
class Account{
    private:
    float Balance;
    public:
    string Owner_Name;
    int AC_ID;
    void getInfo(string  n, int id, float blnc);
    void DepositMoney();
    void display();
    
};
void Account :: getInfo(string  n, int id, float blnc){
    Owner_Name=n;
    AC_ID=id;
    Balance= blnc;
}

void Account :: DepositMoney(){
     int dp;
     cin>>dp;
     Balance=Balance+dp;
}
void Account :: display(){
    cout<<Balance;
}
int main()
{
    Account ac1,ac2;
    ac1.getInfo("michael",12056051,35080.67);
    ac1.DepositMoney();
    ac1.display();

    return 0;
}
