#include<bits/stdc++.h>
#include<vector>
using namespace std;

void instance(int arr[], int size, vector<int>&res, int target){
    if(size<0){
        return;
    }
    if(arr[size]==target){
        res.push_back(size);
        // cout<<size<<" ";
    }
    instance(arr,size-1,res,2);
}

void print(vector<int>&res){
    for(int i: res){
        cout<<i<<" ";
    }
}

int main(){
    int arr[9]= {0, 4, 2, 2, 1, 2, 3, 4, 2} ;
    vector<int>res;
    instance(arr,8,res,2);
    reverse(res.begin(),res.end());
    
    print(res);
    return 0;
}