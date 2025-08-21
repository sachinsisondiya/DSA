#include<iostream>
#include<vector>
using namespace std;
int numberGas(long double mid , vector<int> a){
    int cnt = 0;
    for(int i=1; i<a.size();i++){
        int number = ((a[i] - a[i-1])/mid);
        if((a[i] - a[i-1]) / mid == number * mid){
            number--;
        }
        cnt += number;
    }
    return cnt;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        a.push_back(m);
    }
    long double low = 0;
    long double high = 0;
    for(int i=0;i<n;i++){
        high = max(high ,(long double) (a[i+1]-a[i]));
    }
    long double  diff = 1e-6;
    while(high - low > diff){
        long double mid = (low + high) / (2.0);
        int cnt = numberGas(mid,a);
        if(cnt > k){
            low = mid;
        }
        else{
            high = mid;
        }
    }
 cout<<high;
    return 0;
}