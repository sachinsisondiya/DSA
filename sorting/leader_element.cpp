#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans.push_back(arr[n-1]);
    int max= arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }
//    for(int i=n-2;i>=0;i--){
//        if(arr[i] >arr[i+1]){
//            for(int j=i+1;j<n;j++){
//                  if (arr[i]<arr[j]){
//                      break;
//                  }
//                  if(j==n-1){
//                      ans.push_back(arr[i]);
//
//                  }
//            }         t.c o(n^2)
//
//        }
//
//    }
//    reverse(ans.begin(),ans.end());
      cout<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }


}

