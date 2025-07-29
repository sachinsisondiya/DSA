#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    int target;
    cin>>n>>target;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>m;
    int count=0;
    int sum =0;
    m[sum]++;
    for(int i=0;i<n;i++){
        sum = sum ^ arr[i];
        int xr = sum ^ target;
        count+= m[xr];
        m[sum] = i;

    }
    cout<<count;
}