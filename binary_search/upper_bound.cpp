#include<iostream>

using namespace std;
int main(){
    int n;
    int target;
    cin>>n>>target;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low  =0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] <= target){
            low = mid +1;
        }
        else{
            ans = mid;
            high = mid -1;

        }
    }
    cout<<ans;
}