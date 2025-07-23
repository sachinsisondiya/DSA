#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int el=0;
    for(int i=0;i<n;i++){
        el=arr[i];
        if(cnt==0){
            el=arr[i];
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            count++;   // moore's algorithm
        }
    }
    if(count> (n/2)){
        cout<<el;
    }
//    unordered_map<int,int>m;
//
//    for(int i=0;i<n;i++){
//        m[arr[i]]++;
//    }
//
//    for(auto it:m){
//
//        if(it.second > n/2 ){
//            cout<<it.first;
//        }
//    }
}