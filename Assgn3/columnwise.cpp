#include<bits/stdc++.h>
using namespace std;

void colWise(vector<vector<int>>&mat){
    int row = mat.size();
    int col = mat[0].size();
    for(int i=0; i<row; i++){
        if(i%2==0){
            for(int j=0; j<col; j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1; j>=0; j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
    return;
}

int main(){
    vector<vector<int>>res={{11,12,13,14},{21,22,23,24},{31,32,33,34},{41,42,43,44}};
    colWise(res);
    return 0;
}