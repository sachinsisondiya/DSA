#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    vector<vector<int>> ans(n,vector<int>(n,0));
    int col=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][col]=arr[i][j];
        }
        col--;
    }
    for(auto it:ans){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}