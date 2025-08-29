#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void comb(vector<int>&a  ,vector<int> &ans,vector<int> &temp , int sum , int index ){
    if(index >= a.size()){
        ans.push_back(sum);
        return ;
    }

    sum += a[index];
    comb(a , ans , temp , sum , index +1);
    sum-=a[index];
    comb(a , ans ,temp ,sum  , index +1);
}
vector<int> find(vector<int>& a  ,int k){
    vector<int> ans;
    vector<int> temp;
    comb(a , ans ,temp , 0,0);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }

    vector<int>ans = find(a ,n);
    sort(ans.begin() , ans.end());
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;

}