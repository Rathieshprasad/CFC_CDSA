#include<vector>
#include<stack>
#include<iostream>
using namespace std;
void greaterelement(){
    vector<int>arr={1,5,50,25,20,29,7};
    stack<int>st;
    for(int i=0; i<arr.size(); i++){
        if(arr.size()==0){
            st.push(arr[i]);
            continue;
        }
        while(st.size()!=0 && st.top()<arr[i]){
            cout<<"Greater of "<<st.top()<<"is "<<arr[i]<<"\n";
            st.pop();
        }
        st.push(arr[i]);
    }
    while(st.size()!=0){
        cout<<"Greater of "<<st.top()<<"is "<<-1<<"\n";
        st.pop();
    }

}
int main(){
    greaterelement();
}