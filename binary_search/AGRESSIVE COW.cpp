#include<iostream>
#include<algorithm>
using namespace std;
bool cowPosition(int arr[] , int mid  ,int cow ,int n){
    int cntCow = 1;
    int last = arr[0];

    for(int i =1;i<n;i++){
        if(arr[i] - last >= mid){
            last= arr[i];
            cntCow++;
        }
       if(cntCow >= cow){
           return true;
       }

    }
    return false;


}
int main(){
    int n , k;
    cin>>n>>k;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low  =1;
    int high = *max_element(arr , arr+n);

    while(low <= high){
        int mid = low + (high-low)/2;

        if(cowPosition(arr,mid ,k, n)){
           low = mid +1;
        }
        else{
            high = mid -1;
        }

    }
    cout<<high<<endl;
    return 0 ;
}