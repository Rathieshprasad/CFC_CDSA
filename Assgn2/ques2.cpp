#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    char ch ;
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    case '%':
        cout<<n1%n2;
        break;
    
    default:
        break;
    }
    return 0;
}