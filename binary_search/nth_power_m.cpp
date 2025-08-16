#include<iostream>
using namespace std;
int cal(int n,int m){
    int ans = 1;
    for(int i=1;i<=m;i++){
        ans *=n;
    }
    return ans;
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    int  low =1;
    int high = n;
    while(low <= high){
        long long mid = low + (high-low)/2;
          int ans = cal(mid,n);
        if(ans == m){
            cout<<mid;
            return 0;
        }
        if(ans > m){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<-1;
    return  0;
}