#include<iostream>
using namespace std;

string togglecase(string s){
    string ans="";
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            ans+=s[i]-32;
        }else if(s[i]>='A' && s[i]<='Z'){
            ans+=s[i]+32;
        }
    }
    return ans;
}

int main(){
    string tg=togglecase("asdF");
    cout<<tg;
}