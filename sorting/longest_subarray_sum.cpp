#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int maxi=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxlen =0;
    int right=0;
    int left=0;
    int sum=arr[0];

    while(right<n){
         while(left <= right && sum >k){
             sum -= arr[left];
             left++;
         }
         if(sum==k){
             maxlen = max(maxlen,right-left+1);

         }

        right++;
        if(right<n) sum += arr[right];
    }
    cout<<maxlen;
//    int cnt=0;
//    for(int i=0;i<n;i++){
//         int  sum = arr[i];
//        cnt++;
//        for(int j=i+1;j<n;j++){
//            sum +=arr[j];
//            cnt++;
//            if(sum==k ){
//                int len = j -i +1;
//                maxi=max(maxi,len);
//            }
//
//
//        }
//        cnt=0;
//
//    }
//    cout<<maxi;

}