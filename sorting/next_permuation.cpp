#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

//    next_permutation(a.begin(),a.end());
//
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
     int index=-1;

    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
    }
    for(int i=n-1; i>index;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }
    reverse(a.begin()+index+1,a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



//    for(auto it:ans){
//        cout<<it[x]
//    }


}