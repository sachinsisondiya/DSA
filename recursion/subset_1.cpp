#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subSet(int index,vector<int> &a,int sum,vector<int> &ans){
    if(index==a.size()-1){
        ans.push_back(sum);
        return;
    }

    subSet(index+1,a,sum+a[index],ans);
    subSet(index+1,a,sum,ans);
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    vector<int> ans;

    subSet(0,a,sum,ans);
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}