#include<bits/stdc++.h>
using namespace std;
int main(){
    int vowel=0,consonant=0;
    cout<<"Enter any String: "<<endl;
    char c;
    string s;
    cin>>c;
    getline(cin,s);
    s=c+s;
    //cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(s[i]>='a'&& s[i]<='z'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') vowel++;
        else consonant++;
        }
        
    }
    cout<<"vowel: "<<vowel<<endl;
    cout<<"consonant: "<<consonant<<endl;
}
