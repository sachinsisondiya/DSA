#include<iostream>
#include<vector>
using namespace std;
void permutation(int index, vector<int> &a, vector<vector<int> > &ans){
    if(index==a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=index;i<a.size();i++){
        swap(a[index],a[i]);
        permutation(index+1,a,ans);
        swap(a[index],a[i]);
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
    permutation(0,a,ans);
    for(auto it:ans){
        for(auto j: it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}