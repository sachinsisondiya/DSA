#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum +=arr[i];

        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
}