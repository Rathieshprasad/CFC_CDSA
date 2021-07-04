#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> intersection(int arr1[], int arr2[],int n){
    vector<int> v;
    std::sort(arr1, arr1+n);
    std::sort(arr2, arr2+n);
    for (int i=0; i<n; i++){
        if(arr1[i]==arr2[i]){
            v.push_back(arr1[i]);
        }
    }
    return v;
}


int main(){
    int arr1[7]={1 ,2, 3, 1 ,2, 4, 1};
    int arr2[7]={2, 1, 3, 1, 5, 2, 2};
    vector<int>ans=intersection(arr1,arr2,7);
    for(int element: ans){
        cout<<element<<" ";
    }
}