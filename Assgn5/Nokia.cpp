#include<bits/stdc++.h>
#include<vector>
using namespace std;

void nokia(vector<string>&arr, string st, string ans, int id){
    if(id==st.size()){
        cout<<ans<<"\n";
        return;
    }
    
    char ch=st[id];
    for(int i=0; i<arr[ch-'0'].size(); i++){
        nokia(arr,st,ans+arr[ch-'0'][i], id+1);
    }
}

void nokia(){
    vector<string> arr={"","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz","/*+"};
    string st="12";
    nokia(arr,st,"",0);
}

int main(){
    nokia();
    return 0;
}