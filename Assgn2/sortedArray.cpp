#include <iostream>
using namespace std;


void sorted(int arr[], int n){
    int a=1,d=1,i;
    i=0;
    while((a==1 || d==1) && i<n-1){
        if(arr[i]<arr[i+1]){
            d=0;
        }else if(arr[i]>arr[i+1]){
            a=0;
        }
        i++;
    }
    if(a==1 || d==1){
        cout<<"sorted";
    }else{
        cout<<"unsorted";
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    sorted(arr,5);
    return 0;
}