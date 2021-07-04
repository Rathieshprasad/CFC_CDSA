#include<bits/stdc++.h>
using namespace std;

void conse(string s,string ans,int i){
    if(i>=s.size()){
        cout<<ans<<" ";
        return;
    }
    if(i>0 && s[i]==s[i-1]){
        ans+="";
        conse(s,ans,i+1);
    }else{
        ans+=s[i];
        conse(s,ans,i+1);
    }
}

int main(){
    conse("heeeellllo","",0);
}