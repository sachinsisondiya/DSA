#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    int low = 1;
    int high = n;
    int sqrt = 1;
    while(low <= high){

        int mid = low + (high-low)/2;
        if((mid*mid) == n){
            cout<< mid;
            return 0;
        }
        if((mid*mid) > n){
            high = mid-1;
        }
        else{
            sqrt = mid;
            low = mid +1;

        }

    }
    cout<<sqrt;
    return 0;



}