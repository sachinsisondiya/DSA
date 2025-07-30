#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//    sort(arr,arr+n);
//    for(auto it:arr){
//        cout<<it<<" ";
//    }

    int missing = -1;
    int repeat = -1;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
//    for(auto it:m){
//        cout<<it.first<<" "<<it.second<<endl;
//    }
    for(int i=1;i<=n;i++){
        if(m[i]==0){
            missing=i;
        }
        if(m[i] == 2){
            repeat = i;
        }
    }

//    for(int i=0;i<n;i++){
//       if(arr[i]==arr[i+1]){
//           repeat = arr[i];
//       }
//       else if(arr[i+1]-arr[i]>1){
//
//           missing = min(missing,arr[i]+1);
//
//       }
//       else{
//           continue;
//       }
//    }
//    if(missing == INT_MAX){
//        missing = n;
//    }
    cout<<missing<<repeat<<" ";


}