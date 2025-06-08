#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
//    int n;
//    cin>>n;
//    vector<int> ans;
//
//    for(int i=0;i<n;i++){
//        int data;
//         cin>>data;      approach 1 it is t.c is o(n^2)
//        ans.push_back(data);
//    }
//    int k;
//    cin>>k;
//    vector<int> ans2;
//
//    for(int i=0;i<n;i++){
//        int sum=0;
//        for(int j=i;j<n;j++){
//            sum += ans[j];
//            ans2.push_back(sum);
//        }
//    }
//    sort(ans2.begin(), ans2.end());
//    int size=ans2.size();
//    int element=ans2[size-k];
//    cout<<element;

priority_queue<int,vector<int>, greater<int>> pq;

    int n;
    cin>>n;
    vector<int> ans;

    for(int i=0;i<n;i++){
        int data;
         cin>>data;
        ans.push_back(data);
    }
    int k;
    cin>>k;


    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){

            sum += ans[j];
            if(pq.size() < k){
                pq.push(sum);
            }
            else{

                if(pq.top() < sum){
                    pq.pop();
                    pq.push(sum);
                }
            }

        }
    }
    int element=pq.top();
    cout<<element;

 return 0;




}