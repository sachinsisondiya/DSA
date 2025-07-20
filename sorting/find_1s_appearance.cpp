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

    int x=0;
    for(int i=0;i<n;i++){
        x= x ^ arr[i];
    }
    cout<<x;

//    unordered_map<int ,int>m;
//    for(int i=0;i<n;i++){
//        m[arr[i]]++;
//    }                                 o(n) s.c o(n)

//    for(auto it:m){
//        if(it.second==1){
//            cout<<it.first<<endl;
//        }
//    }
}