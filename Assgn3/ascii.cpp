#include<iostream>
#include<vector>
using namespace std;

string ascii(string s){
    string ans="";
    for(int i=1; i<s.size(); i++){
        ans+=s[i-1];
        ans+=to_string(s[i]-s[i-1]);
    }
    ans+=s[s.size()-1];
    return ans;   
}

int main(){
    string base= ascii("acb");
    cout<<base;
}