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

    int maxi=INT_MIN;
    int cnt=0;
    for(int i=0;i<n;i++){

        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    cout<<maxi;
//    vector<int> ans;
//    for(int i=0;i<n;i++){
//        int cnt=1;
//        for(int j=i+1;j<n;j++){
//            if(arr[i]==arr[j]){  O(n^2) + nlogn   s.c o(n)
//                cnt++;
//            }
//            else{
//                break;
//            }
//        }
//        ans.push_back(cnt);
//
//    }
//  sort(ans.begin(), ans.end());
//    cout<<ans[ans.size()-1];


}