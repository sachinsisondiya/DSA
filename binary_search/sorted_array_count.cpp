#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low  = 0;
    int high  = n-1;
    int rotated = INT_MAX;
    int index  =-1;

    while(low <= high){
        int mid = low + (high-low)/2;
       if(arr[low] <= arr[mid]){
           if(arr[low] < rotated){
              index = low;
           }
           rotated = min(rotated,arr[low]);
           low = mid+1;

       }
       else{
           if(arr[mid] < rotated){
               index = mid;
           }
           rotated = min(rotated,arr[mid]);
           high  =mid -1;
       }
    }

    cout<<index;
}