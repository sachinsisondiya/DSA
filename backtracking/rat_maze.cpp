#include<iostream>
#include<vector>
using namespace std;
bool issafe(int newx,int newy,vector<vector<bool>> &visited ,vector<vector<int>> &matrix,int n){
    if((newx >=0 && newx <n) && (newy >=0 && newy <n) && visited[newx][newy] !=1 && matrix[newx][newy]==1){
        return true;
    }
    else{
        return false;
    }
}
void solve(int x,int y, vector<vector<int>> &matrix,int n,vector<string> &ans ,vector<vector<bool>> &visited,
           string path){


    // base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }


    // 4 movement
    //
    //down
    visited[x][y]=1;
    if(issafe(x+1,y,visited,matrix,n)){

        solve(x+1,y,matrix,n,ans,visited,path + 'D');

    }
    //left
    if(issafe(x,y-1,visited,matrix,n)){

        solve(x,y-1,matrix,n,ans,visited,path + 'L');

    }
      // right
    if(issafe(x,y+1,visited,matrix,n)){

        solve(x,y+1,matrix,n,ans,visited,path + 'R');

    }

      //up
    if(issafe(x-1,y,visited,matrix,n)){

        solve(x-1,y,matrix,n,ans,visited,path + 'U');

    }
    visited[x][y]=0;

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];

        }
    }


    vector<string> ans;
    if(matrix[0][0]==0){
        cout<<"rat is traped";
        return 0;

    }
    vector<vector<bool>> visited (n,vector<bool>(n,0));

    string path= "";

    solve(0,0,matrix,n,ans,visited,path);

    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<endl;



}