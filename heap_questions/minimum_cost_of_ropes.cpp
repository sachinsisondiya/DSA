#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    //create min heap
    priority_queue<int,vector<int>,greater<int> >pq;

    for(int i=0;i<n;i++){
        pq.push(a[i]);
    }



    int cost=0;

    while(pq.size()>1){
        int first=pq.top();
        pq.pop();

        int second =pq.top();
        pq.pop();

        int sum = first+second;

        cost +=sum;
        pq.push(sum);
    }
    cout<<cost<<endl;
}