#include<iostream>
using namespace std;

int noOfDigits(int n){
    int count =0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    
    cout<<noOfDigits(20)<<endl;
    return 0;

}