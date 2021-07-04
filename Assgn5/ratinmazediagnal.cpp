#include<iostream>
#include<vector>
using namespace std;

vector<string>ratinmaze(int sr, int sc, int er, int ec){
    vector<string>ans;
    if(sr==er && sc==ec){
        vector<string>base;
        base.push_back("");
        return base;
    }
    if(sc+1<=ec){
        vector<string>east = ratinmaze(sr,sc+1,er,ec);
        for(string element: east){
            ans.push_back("H"+element);
        }
    }
    if(sr+1<=er){
        vector<string>south = ratinmaze(sr+1,sc,er,ec);
        for(string element: south){
            ans.push_back("V"+element);
        }
    }
    if(sr+1<=er && sc+1<=ec){
        vector<string>southEast = ratinmaze(sr+1,sc+1,er,ec);
        for(string element: southEast){
            ans.push_back("D"+element);
        }
    }
    return ans;
}

int main(){
    vector<string>ans= ratinmaze(0,0,2,2);
    for(string element: ans){
        cout<<element<<"\n";
    }
}