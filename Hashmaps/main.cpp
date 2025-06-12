#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> m;
    int maxifreq=0;
    int ans=0;

    for(int i=0;i<n;i++){
        m[a[i]]++;
        maxifreq=max(maxifreq,m[a[i]]);
    }

    for(int i=0;i<n;i++){
        if(maxifreq==m[a[i]]){
            ans=a[i];
            break;
        }
    }

    cout<<ans;

}