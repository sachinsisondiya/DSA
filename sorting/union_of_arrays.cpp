#include<iostream>
#include<vector>
//#include<map>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
        if(ans.size()==0 || ans.back() != arr1[i]){
              ans.push_back(arr1[i]);
        }
        i++;
        }
        else{
            if(ans.size()==0 || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(ans.size() ==0 || ans.back()!=arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while (j<m){
        if(ans.size() ==0 || ans.back()!=arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    for(auto it:ans){
        cout<<it<<" ";
    }

//    map<int,int>a;
//
//    for(int i=0;i<n;i++){
//        a[arr1[i]]++;
//    }
//    for(int i=0;i<m;i++){
//        a[arr2[i]]++;
//    }
//
//    for(auto it:a){
//        cout<<it.first<<" ";
//    }


}