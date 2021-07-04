#include<iostream>
using namespace std;

reverseDigits(int n){
    int ans =0;
    while(n!=0){
        ans = ans*10 + n%10;
        n/=10;
    }
    return ans;
}

int main(){
    cout<<reverseDigits(234);
    return 0;

}