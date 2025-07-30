#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> first(n);
    vector<int> second(m);

    for(int i=0;i<n;i++){
        cin>>first[i];
    }
    for(int i=0;i<m;i++){
        cin>>second[i];
    }

    for(int i=0;i<n;i++){

        for(int j = 0;j<m;j++){
            if(first[i] > second[j]){
                swap(first[i],second[j]);
            }

        }
    }
    sort(second.begin(),second.end());
    for(auto it:first){
        cout<<it<<" ";
    }
    for(auto j:second){
        cout<<j<<" ";
    }
}