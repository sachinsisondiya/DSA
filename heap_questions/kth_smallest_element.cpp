#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the kth smallest element"<<endl;
    int k;
    cin>>k;

    priority_queue<int> qt;
    //insert first k th element of array in queue
    for(int i=0;i<k;i++){
        qt.push(arr[i]);
    }
    // traverse remaining array

    for(int i=k;i<n;i++){
        if(qt.top() > arr[i]){
            qt.pop();
            qt.push(arr[i]);
        }
    }

    int ans=qt.top();
    cout<<ans;


    return 0;

}
