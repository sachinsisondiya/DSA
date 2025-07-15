#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map<int,int> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        ans[a[i]]++;

    }
    for(auto it:ans){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<endl;
}