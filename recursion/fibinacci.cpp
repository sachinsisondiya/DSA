#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
    }
    if(n == 1){
        cout<<1;
    }
    int a[n];
    a[0]=0;
    a[1] = 1;

    int sum = 1;
    for(int i=2 ; i<n;i++){
        a[i]  = a[i-1] + a[i-2];
    }

    for(auto it:a){
        cout<<it;
    }
    return 0;

}