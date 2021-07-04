#include<iostream>
#include<vector>
using namespace std;

void spiralclock(vector<vector<int>>&m){
    int row_start=0, row_end= m.size()-1, col_start=0, col_end=m[0].size()-1;
    while(row_start<=row_end && col_start<=col_end){
        for(int row=row_start; row<=row_end; row++){
            cout<<m[row][col_start]<<" ";
        }
        col_start++;
        for(int col=col_start; col<=col_end; col++){
            cout<<m[row_end][col]<<" ";
        }
        row_end--;
        for(int row=row_end; row>=row_start; row--){
            cout<<m[row][col_end]<<" ";
        }
        col_end--;
        for(int col=col_end; col>=col_start; col--){
            cout<<m[row_start][col]<<" ";
        }
        row_start++;
    }

}

int main(){
    vector<vector<int>>mat={{11,12,13,14},{21,22,23,24},{31,32,33,34},{41,42,43,44}};
    spiralclock(mat);
    return 0;
}