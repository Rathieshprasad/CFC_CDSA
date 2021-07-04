#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>>&board, int row, int col, int val){
    
}

void sudoku(vector<vector<int>>&board, int row, int col){
    if(row==board.size()-1 && col==board[0].size()){
        display(board);
    }
    cout<<"\n";
    return;

    if(col==board[0].size() && row< board.size()){
        row+=1;
        col=0;
    }
    if(board[row][col]!=0){
        sudoku(board,row,col+1);
    }else{
        for(int val=1; val<=9; val++){
            if(isSafe(board,row,col,val)){
                board[row][col]=val;
                sudoku(board,row,col+1);
                board[row][col]=0;
            }
        }
    }
}

int main(){
    vector<vector<int>>board={};
    sudoku(board,0,0);
    return 0;

}
