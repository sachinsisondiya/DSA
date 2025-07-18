#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=k;i++){
        int val =arr[0];
        for(int m=1;m<n;m++){
            arr[m-1]=arr[m];
        }
        arr[n-1]=val;

    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}