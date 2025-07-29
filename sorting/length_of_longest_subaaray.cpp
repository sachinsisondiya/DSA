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
    int len = 0;
    unordered_map<int,int>m;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==0){
            len = i+1;
        }
        else if(m.find(sum) != m.end()){
            len = max(len, i - m[sum]);
        }
        else{
            m[sum]=i;
        }

    }

//    for(int i=0; i<n; i++){
//        int sum = arr[i];
//        if(arr[i]==0){
//            maxi = 1;
//        }
//        for(int j = i+1 ;j < n; j++){
//            sum += arr[j];
//            if(sum == 0){
//                int count = 0;
//                for(int k=i;k <= j;k++){
//                    count++;
//                }
//                if(count>maxi){
//                    maxi= max(maxi,count);
//                }
//            }
//        }
//    }

    cout<<len;
}