#include<iostream>
using namespace std;

int lastOc(int arr[], int size, int k){
    if(arr[size]<0){
        return -1;
    }
    if(arr[size]==k){
        return size;
    }

    return lastOc(arr,size-1,k);
}

int main(){
    int arr[7]={3 ,2, 1 ,8 ,6, 1, 3};
    int ans =lastOc(arr,7,1);
    cout<<ans;
    return 0;
}