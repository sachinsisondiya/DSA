#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void heapify(vector<int> &ans,int i,int n){
  int largest=i;
  int left=2*i +1;
  int right = 2*i +2;
  if(left <= n && ans[largest ] < ans[left]){
      largest=left;
  }
  if(right<=n && ans[largest] < ans[right]){
      largest=right;
  }
  if(largest !=i){
      swap(ans[i],ans[largest]);
      heapify(ans,n,largest);
  }
}
int main(){
    vector<int> a;
    a.push_back(10);
    a.push_back(5);
    a.push_back(6);
    a.push_back(2);
    vector<int>b;
    b.push_back(12);
    b.push_back(7);
    b.push_back(9);
    vector<int>c;
    // merge both array 1 and 2 given
    for(auto i:a)
        c.push_back(i);

    for(auto j:b)
        c.push_back(j);


    // heapify them
    int n=c.size()-1;
    for (int i=n/2 ;i>=0;i--){
        heapify(c,i,n);
    }

    for (int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;


}