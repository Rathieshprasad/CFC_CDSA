#include<iostream>
using namespace std;

string replace(string s){
    string ans="";
    for(int i=0; i<s.size(); i++){
        if(s[i]%2==0){
            ans+=s[i]-1;
        }else{
            ans+=s[i]+1;
        }
    }
    return ans;
}

int main(){
    string tg=replace("abcg");
    cout<<tg;
}