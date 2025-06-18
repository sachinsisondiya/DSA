#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int row,int col,vector<vector<int>> &board,int val){
    for(int i=0;i<board[0].size();i++){
        if(board[row][i] == val){
            return false;
        }
        if(board[i][col]==val){
            return false;
        }
        if(board[3*(row/3) + i/3][3*(col/3)+ i%3]==val){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<int>> & board){
    int n=board[0].size();
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            // cell empty

            if(board[i][j]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(i,j,board,val)){
                        board[i][j]=val;
                        //recursive call
                        bool solutionIsPossible=solve(board);
                        if(solutionIsPossible){
                            return true;
                        }
                        else{
                            board[i][j]=0;
                        }

                    }

                }
                return false;

            }
        }
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }

    bool sudoku=solve(board);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    if(sudoku){
        cout<<"sudoku is complete"<<endl;
    }
    else{
        cout<<"sudoku is incomplete"<<endl;
    }





}