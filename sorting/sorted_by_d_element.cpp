#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//void reve(int arr[],int n, int k){
//    k=k%n;
//    if(n==0){
//        return ;              optimal approach
//    }
//    reverse(arr,arr+k);
//    reverse(arr+k,arr+n);
//    reverse(arr,arr+n);
//}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
        cout<<temp[i];
    }
    cout<<endl;

    for(int i=0;i<n-k;i++){
        arr[i]=arr[k+i];
        cout<<arr[i]; // k is out of index
    }
   cout<<endl;
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
        cout<<arr[i];

    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }



//    reve(arr,n,k);
//    for(int i=0;i<n;i++){
//        cout<<arr[i];
//    }
}
