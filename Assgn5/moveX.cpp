#include<iostream>
using namespace std;

void moveX(string s, int idx, string ans){
    if(idx==s.size()){
        cout<<ans;
        return;
    }
    if(s[idx]=='x'){
        ans+=s[idx];
    }else{
        cout<<s[idx];
    }
    moveX(s,idx+1,ans);

}

int main(){
    string s = "abexexdexed";
    moveX(s,0,"");
    return 0;
}