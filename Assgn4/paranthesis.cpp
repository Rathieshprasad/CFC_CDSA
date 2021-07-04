#include<bits/stdc++.h>
using namespace std;

void balance(string s, int i, int res){

    if(i==s.size()){
        if(res==0){
            cout<<"Balanced";
        }else{
            cout<<"Unbalanced";
        }
        return;
    }
    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        res++;
    }
    else if(s[i]==')' || s[i]=='}' || s[i]==']'){
        res--;
    }
    balance(s,i+1,res);


}

int main(){
    string s="[a + {b +(c+d) + e} + f]";
    // cin>>s;
    balance(s,0,0);
    return 0;
}