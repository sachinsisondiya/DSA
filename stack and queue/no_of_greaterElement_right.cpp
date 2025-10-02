#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> ind;
    for(int i=0;i<n;i++){
        int g;
        cin>>g;
        a.push_back(g);
    }
    int index;
    cin>>index;
    for(int i=0;i<index;i++){
        int g;
        cin>>g;
        ind.push_back(g);
    }
    vector<int> ans;


    for(int i=0;i<index;i++){
        int cnt =0;
        int start = a[ind[i]];
        for(int j = ind[i];j<n-1;j++){
            if( a[j+1] > start){
                cnt++;
            }
        }
        ans.push_back(cnt);
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;

}