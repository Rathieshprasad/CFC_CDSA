#include<bits/stdc++.h>
using namespace std;

int sumOfMinMax(int *arr, int k, int n) {
   
    int sum = 0;
    

    for (int i = 0; i <= (n - k); i++) {
        int min = INT_MAX;
        int max = INT_MIN;

        for (int j = i; j < i + k; j++) {
            min = std::min(min, arr[j]);
            max = std::max(max, arr[j]);
        }
        

        sum += (min + max);
    }
    
    return sum;
}

int main(){
    int arr[7]={2,5,-1,7,-3,-1,2};
    int ans= sumOfMinMax(arr,4,7);
    cout<<ans;
    return 0;
}