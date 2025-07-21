#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int >a;
    int len =0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum == k){
            len= max(len, i+1);
        }
        int rem = sum - k;
        if(a.find(rem) != a.end()){
            int maxlen = i - a[rem];
            len = max(len, maxlen);
        }
        if(a.find(sum) == a.end()){
            a[sum]=i;
        }
    }
    cout<<len;
}