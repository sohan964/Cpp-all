/*           higherartical inheritence

                       Number class
                            /  \
                           /    \
                     Square     Cube 
                      class      class
                                                  */

#include <iostream>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Number{
    private:
    
    protected:
        int num;
        int sqr;
        int cube;
    public:
        Number(){
            cin>>num;
        }
};

class Square:public Number{
    private:
    
    protected:
        
    public:
        Square():Number(){
            
        }
        void display_s(){
            
            sqr=num*num;
            cout<<sqr<<endl;
        }
    
    
};
class Cube:public Number{
    private:
    
    protected:
    
    public:
       Cube():Number(){
           
       }
       
       void display_c(){
           cube=num*num*num;
           cout<<cube<<endl;
       }
};

int main()
{
    optimize();
    
    Square obj1;
    
    obj1.display_s();
    
    Cube obj;
    obj.display_c();
    

    return 0;
}
