#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int left=0;
    int right= n-1;
    int top=0;
    int bottom=n-1;
    vector<int>ans;
    while(top<=bottom && left<=right){

        for(int i=left;i<=right;i++){
            ans.push_back(a[top][i]);
        }
        top++;

        for(int i=top;i<bottom;i++){
            ans.push_back(a[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(a[i][left]);
            }
            left++;
        }

    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}