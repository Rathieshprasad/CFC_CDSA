#include<iostream>
using namespace std;

int sumUptoN(int n){
    if(n!=0){
        return n+ sumUptoN(n-1);
    }
    return 0;
}
int main(){
    int ans=sumUptoN(5);
    cout<<ans;
    return 0;
}