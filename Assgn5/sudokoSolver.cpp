#include<iostream>
#include<vector>
using namespace std;



bool isSafe(vector<vector<int>>&board,int row, int col,int val){
    for(int i=0; i<board.size(); i++){
        if(board[i][col]==val){
            return false;
        }
    }
    for(int i=0; i<board[0].size(); i++){
        if(board[row][i]==val){
            return false;
        }
    }
    row = (row/3)*3;
    col = (col/3)*3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i+row][j+col]==val){
                return false;
            }
        }
    }
    return true; 
}
void display(vector<vector<int>>board){
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[0].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void sudoko(vector<vector<int>>&board,int row, int col){
    if(row==board.size()-1 && col==board[0].size()){
        // for(int i=0; i<board.size(); i++){
        //     for(int j=0; j<board[0].size(); j++){
        //         cout<<board[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        display(board);
        cout<<"\n";
        return;
    }
    if(col==board[0].size()){
        row+=1;
        col=0;
    }
    if(board[row][col]!=0){
        sudoko(board,row,col+1);
    }
    else{
        for(int val=1; val<=9; val++){
            if(isSafe(board,row,col,val)){
                board[row][col]=val;
                sudoko(board,row,col+1);
                board[row][col]=0;
            }
        }
    }
}

void sudoko(){
    vector<vector<int>>board={{5, 3, 0, 0, 7, 0, 0, 0, 0 },{6, 0 ,0, 1, 9, 5, 0, 0, 0},{0, 9, 8, 0, 0, 0, 0, 6, 0},{8, 0, 0, 0, 6, 0, 0, 0, 3 },{4, 0, 0, 8, 0, 3 ,0 ,0, 1},{7, 0 ,0, 0 ,2 ,0 ,0 ,0, 6},{0, 6, 0, 0, 0, 0 ,2, 8 ,0 },{0 ,0, 0, 4, 1, 9, 0 ,0 ,5 },{0, 0, 0, 0 ,8 ,0, 0, 7 ,9}};
    sudoko(board,0,0);
}

int main(){
    sudoko();
    return 0;
}