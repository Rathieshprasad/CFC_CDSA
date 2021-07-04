#include<iostream>
using namespace std;

int twin(string s, int i){
    int count =0;
    if(i+2>=s.size()){
        return 0;
    }
    if(s[i]!=s[i+1] && s[i]==s[i+2]){
        return 1+twin(s,i+1);
    }
    else{
        return twin(s,i+1);
    }

}

int main(){
    string s ="AXAXA";
    int ans = twin(s,0);
    cout<<ans;
    return 0;
}