#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>mat;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            temp.push_back(k);
        }
        mat.push_back(temp);
    }
    int top = 0;
    int bottom = n-1;
    while(top< bottom){
        if(mat[top][bottom] == 1){
            top = top + 1;
        }
        else if(mat[bottom][top] == 1){
            bottom = bottom -1;
        }
        else{
            top++;
            bottom--;
        }
    }
    if(top>bottom){
        cout<<"no celeberity";
        return -1;
    }
    for(int i = 0;i<n;i++ ){
        if(i == top) continue;
        if(mat[top][i] == 1 && mat[i][top] == 0){
            return -1;
        }
    }
    cout<<top<<"this is celeberity";
    return 0;

};
