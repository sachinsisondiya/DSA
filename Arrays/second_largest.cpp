#include<iostream>
using namespace std;
#include<algorithm>
#include<climits>
int find(int arr[],int n){
    int maxi=INT_MIN;
    int smaxi=INT_MIN;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);

    }
    cout<<maxi;
    for(int i=0;i<n;i++){
        if(arr[i]<smaxi && arr[i]!=maxi){
            smaxi=max(smaxi,arr[i]);
        }
    }
    return smaxi;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sl=find(arr,n);
   // cout<<sl;
    return 0;
//    sort(arr,arr+n);
//    for(int i=n-1;i>=0;i--){
//        if(arr[i] == arr[i-1]){
//            continue;
//        }
//        else{
//            if(i==0){
//                cout<<"-1";
//            }
//            else{
//                cout<<arr[i-1];
//                break;
//
//            }
//
//        }
//    }
    //cout<<"-1";
    return 0;
}