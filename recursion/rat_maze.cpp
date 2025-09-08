#include<iostream>
#include<vector>
using namespace std;
void solve(int i , int  j,vector<vector<int>> &a , vector<string> &ans ,string s,vector<vector<int>> &visited ,int di[],int dj[],int n ){
    if(i == n-1 && j == n-1){
        ans.push_back(s);
        return ;
    }
    string dir = "DLRU";
    for(int ind=0;ind<n;ind++){
        int nexti = i+ di[ind];
        int nextj = j + dj[ind];
        if(nexti >= 0 && nextj >= 0 && nexti < n && nextj < n&& !visited[nexti][nextj] && a[nexti][nextj]==1){
            visited[i][j] = 1;
            solve(nexti , nextj,a ,ans ,s + dir[ind] , visited , di ,dj , n);
            visited[i][j] = 0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a;
    for(int i=0;i<n;i++){
        vector<int> b;
        for(int j=0;j<n;j++){
            int m;
            cin>>m;
            b.push_back(m);
        }
        a.push_back(b);
    }
    vector<vector<int>> visited(n,vector<int>(n,0));
    int di[] = {+1 , 0 , 0 , -1};
    int dj[]  = {0 , -1, 1 ,0};
    vector<string> ans;
    if(a[0][0] ==1){
        solve(0,0 ,a ,ans ,"",  visited , di , dj , n);
    }
    for(auto it : ans){
        cout<<it<<endl;
    }
    return 0;


}