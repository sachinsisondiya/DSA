#include<iostream>
#include<vector>
using namespace std;
void addsolution(int n,vector<vector<int>>&board , vector<vector<int>> &ans){
    vector<int> temp;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           temp.push_back(board[i][j]);
       }
    }
    ans.push_back(temp);
}
bool safe(int row,int col,vector<vector<int>> & board , int n){
    int x=row;
    int y = col;

    while(y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
    }
    x=row;
    y=col;

    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
        x--;
    }
    x=row;
    y=col;

    while(x<n && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
        x++;
    }

  return true;
}

void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    if(col==n){
        addsolution(n,board,ans);
        return;
    }
    //solve 1 case rest on recursion
    for(int row=0;row <n;row++){
        if(safe(row,col,board,n)){
            board[row][col]=1;
            solve(col+1,ans,board,n);

            board[row][col]=0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int> (n,0));

    vector<vector<int>> ans;
    solve(0,ans,board,n);

   for(auto it:ans){
       for(auto j:it){
           cout<<j<<" ";
       }
   }


}