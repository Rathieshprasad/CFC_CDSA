#include<iostream>
using namespace std;

void ques1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void ques2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void ques3(int n){
    int nsp = n-1,nst=1,id=0;
    while(id<n){
        int csp =1;
        while(csp<=nsp){
            cout<<" ";
            csp++;
        }
        int cst=1;
        while(cst<=nst){
            int k = cst;
            if(k>(nst+1)/2){
                k = nst-cst+1;
            }
            cout<<k;
            cst++;
        }
        cout<<"\n";
        nsp=nsp-1;
        nst=nst+2;
        id++;
    }
}

void ques4(int n){
    int coef =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || i==0){
                coef=1;
            }else{
                coef = coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }
}

void ques5(int n){
    int coef=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || i==0){
                coef=1;
            }
            else{
                coef = coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<"\n";
    }
}

void ques6(int n){
  int id=1,nst=1,nsp=n-1;
  while(id<=2*n-1){
    int csp=1;
    while(csp<=nsp){
      cout<<" ";
      csp++;
    }
    int cst=1;
    while(cst<=nst){
      cout<<"*";
      cst++;
    }
    cout<<"\n";
    if(id<n){
      nsp=nsp-1;
      nst=nst+2;
    }
    else{
      nsp=nsp+1;
      nst=nst-2;
    }
    id++;
  }
}

void ques7(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }        
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }        
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }        
}

void ques8(int n){
    int space=(2*n-1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=space; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int j=1; j<=space; j++){
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
    space=0;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=space; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int j=1; j<=space; j++){
            cout<<"*";
        }    
        cout<<endl;
        space++;
    } 
}

int main(){
    ques1(5);
    ques2(5);
    ques3(5);
    ques4(5);
    ques5(5);
    ques6(5);
    ques7(5);
    ques8(5);


}