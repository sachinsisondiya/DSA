#include<iostream>
using namespace std;
int rm(int arr[] , int n){

    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=rm(arr,n);
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}