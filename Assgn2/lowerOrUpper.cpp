#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase";
    }

}