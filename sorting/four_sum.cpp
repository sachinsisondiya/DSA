#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort(arr,arr+n);

    set<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k =j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
    }
    for(auto it:ans){
        for(auto j: it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}