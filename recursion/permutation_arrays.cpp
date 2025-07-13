#include<iostream>
#include<vector>
using namespace std;
void permutation(int index,vector<int> &a,vector<vector<int>> &ans, vector<int> &temp,int freq[]){
    if(index==a.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<a.size();i++){
        if(!freq[i]){
            temp.push_back(a[i]);
            freq[i]=1;
            permutation(index+1,a,ans,temp,freq);
            temp.pop_back();
            freq[i]=0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>>ans;
    vector<int> temp;
    int freq[a.size()];
    for(int i=0;i<a.size();i++){
        freq[i]=0;
    }
    permutation(0,a,ans,temp,freq);
    for(auto it:ans){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}