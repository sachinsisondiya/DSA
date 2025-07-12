#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subSet(int index, vector<int> &a, vector<vector<int>>&ans,vector<int> &temp){
    ans.push_back(temp);
    for(int i=index;i<a.size()-1;i++){

        if(index!=i && a[i]==a[i-1]) continue;
        temp.push_back(a[i]);
        subSet(index+1,a,ans,temp);
        temp.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> ans;
    vector<int> temp;
    sort(a.begin(),a.end());
    subSet(0,a,ans,temp);
    for(auto it:ans){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}