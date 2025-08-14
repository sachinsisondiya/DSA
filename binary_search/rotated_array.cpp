#include<iostream>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low  =0;
    int high = n-1;
    while(low <= high){
         int mid = low + (high-low)/2;
         if(target == arr[mid]){
             cout<<mid;
             return 0;
         }
         else if(arr[low] < arr[mid]){
             if(arr[low] <= target && arr[mid] >= target){
                 high = mid-1;
             }
             else{
                 low = mid +1;
             }
         }
         else{
             if(arr[mid] <= target && target <= arr[high]){
                 low = mid+1;
             }
             else{
                 high = mid -1;
             }
         }
    }
    cout<<-1<<endl;
    return 0;
}