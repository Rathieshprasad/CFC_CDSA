#include<bits/stdc++.h>
using namespace std;

vector<int> strongest(int *arr, int k, int n) {
    vector<int>s;
    for (int i = 0; i <= (n - k); i++) {
        int max = INT_MIN;
        for (int j = i; j < i + k; j++) {
            max = std::max(max, arr[j]);
        }
        s.push_back(max);
    } 
    
    return s;
}

int main(){
    int arr[5]={1,3,1,4,5};
    vector<int>ans= strongest(arr,3,5);
    for(int element: ans){
        cout<<element<<" ";
    }
    return 0;
}