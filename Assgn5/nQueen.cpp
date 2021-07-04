#include<iostream>
#include<vector>
using namespace std;


bool isSafe(vector<vector<int>>&board, int row, int col){
    for(int i=row,j=col; i>=0&&j<board[0].size(); i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    for(int i=row,j=col; i>=0&&j>=0; i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    for(int i=row; i>=0; i--){
        if(board[i][col]==1){
            return false;
        }
    }
    return true;
}
void display(vector<vector<int>>&board){
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[0].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void nQueen(vector<vector<int>>&board, int row){
    if(row==board.size()){
        display(board);
        cout<<"\n";
        return;
    }
    for(int col=0; col<board[0].size(); col++){
        if(isSafe(board,row,col)){
            board[row][col]=1;
            nQueen(board, row+1);
            board[row][col]=0;
        }
    }
}
void nQueen(){
    vector<vector<int>>board(4,vector<int>(4,0));
    nQueen(board,0);
}
int main(){
    nQueen();
    return 0;
}