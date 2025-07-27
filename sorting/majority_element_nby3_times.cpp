#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(auto it:m){
        if(it.second > n/3){
            cout<<it.first<<" ";
        }
    }
//    int count;
//    vector<int> ans;
//    for(int i=0;i<n;i++){
//        count=1;
//        for(int j=i+1;j<n;j++){
//            if(arr[j]==arr[i]){
//                count++;
//            }
//
//        }
//        if(count > n/3 && find(ans.begin(),ans.end() ,arr[i])== ans.end()){
//            ans.push_back(arr[i]);
//        }
//    }
//    for(auto it:ans){
//        cout<<it<<" ";
//    }
}