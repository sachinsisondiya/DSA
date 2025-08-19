#include<bits/stdc++.h>
using namespace std;
int cntStudent(vector<int> a, int mid){
    int cnt = 1;
    int last  = 0;
    for(int i=0;i<a.size();i++){
        if(last + a[i] <= mid){
            last += a[i];
        }
        else{
            cnt +=1;
            last = a[i];
        }
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
    int low = *max_element(a.begin() , a.end());
    int high = accumulate(a.begin() , a.end() , 0);

    while(low <= high){
        int mid = low + (high-low)/2;
        int student = cntStudent(a,mid);
        if(student > k){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    cout<<low<<endl;
    return 0;
}
