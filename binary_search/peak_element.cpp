#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low  =0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == arr[0] || arr[mid] == arr[n-1]){
            cout<<mid;
            return 0;
        }
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid +1]){
            cout<<mid;
            return 0;
        }
        if(arr[low] <= arr[mid]){
            low = mid +1;
        }
        else{
            high = mid -1;
        }

    }

    return 0;

}