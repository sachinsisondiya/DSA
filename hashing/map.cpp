#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int m;
    cin>>m;
    while(m--){
        int test;
        cin>>test;

        cout<<mpp[test];
    }

}