#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
int find(vector<int> a , int part){
    int sum = 0;
    int p = 1;
    for(int i=0;i<a.size();i++){
       if(sum +a[i] <= part){
           sum += a[i];
       }
       else{
           p++;
           sum = a[i];
       }
    }
    return p;
}
int main(){
    int n , k;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    int low = *max_element(a.begin() , a.end());
    int high = accumulate(a.begin() , a.end() , 0);
    for(int i=low;i<=high ;i++){
        int x = find(a , i);
        if( x == k){
            cout<<i<<endl;
            return 0 ;
        }
    }
    return 0;


}