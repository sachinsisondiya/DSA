#include<iostream>
#include<vector>
using namespace std;

void sum(int index,vector<int>&a ,int target,vector<vector<int>>&ans, vector<int> &temp){

    if(index==a.size()){
        if(target==0){
            ans.push_back(temp);
        }
        return;
    }

    if(a[index] <= target){
        temp.push_back(a[index]);
        sum(index,a,target-a[index],ans,temp);
        temp.pop_back();
    }
    sum(index+1,a,target,ans,temp);
}
int main(){
    int target;
    cin>>target;

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> ans;
    vector<int> temp;

    sum(0,a,target,ans,temp);

    for(auto it :ans){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}