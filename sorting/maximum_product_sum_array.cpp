#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==0) continue;
        int sum = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[i]==0) continue;
            sum = sum * arr[j];
            maxi = max(maxi , abs(sum));

        }
    }
    cout<<maxi;
}