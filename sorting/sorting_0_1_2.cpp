#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low =0;
    int mid=0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
//    int zeros=0;
//    int ones=0;
//    int twos=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]==0){
//            zeros++;
//        }
//        else if(arr[i]==1){
//            ones++;
//        }
//        else{
//            twos++;
//        }
//    }
//    for(int i=0;i<zeros;i++){
//        arr[i]=0;
//    }
//    cout<<ones<<endl;
//    for(int i=zeros; i<zeros+ones;i++){
//        arr[i]=1;
//        cout<<arr[i]<<endl;
//    }
//    for(int i=ones+zeros;i<n;i++){
//        arr[i]=2;
//    }
}