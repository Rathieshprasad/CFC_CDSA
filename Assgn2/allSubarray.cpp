#include<iostream>
using namespace std;

void subArray(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }
    }
} 

int main(){
    int arr[]={7,2,6};
    subArray(arr,3);
}