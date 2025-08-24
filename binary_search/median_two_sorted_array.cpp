#include<iostream>
#include<vector>
using namespace std;
int upperbound(vector<int> b , int  m){
    int low = 0;
    int high = b.size();
    int ans = 0;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(b[mid] > m){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int find( vector<vector<int>>&a , int &mid , int &n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += upperbound(a[i] , mid);
    }
    return cnt;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a;
    for(int i=0;i<n;i++){
        vector<int>b;
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            b.push_back(k);
        }
        a.push_back(b);
    }

    int low = INT_MAX;
    int high = INT_MIN;
    for(int i = 0;i<n;i++){
        low = min(low , a[i][0]);
        high = max(high , a[i][m-1]);
    }
    int midiun = m*n/2;
    while(low <= high){
        int mid = low + (high-low)/2;
        int cnt = find(a , mid, n);
        if(cnt <= midiun){
           low = mid +1;

        }
        else{
            high = mid-1;
        }
    }
    cout<<low;
    return 0;

}