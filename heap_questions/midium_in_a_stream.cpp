#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int signum(int a,int b){
    if(a==b){
        return 0;
    }
    else if(a>b){
        return 1;
    }
    else{
        return -1;
    }
}

void calMedium(int element , priority_queue<int>& maxi, priority_queue<int,
               vector<int>,greater<int>> &mini,double &medium){
    switch (signum(maxi.size(),mini.size())) {
        case 0: if(element >medium){
            mini.push(element);
            medium=mini.top();
        }
        else{
            maxi.push(element);
            medium=maxi.top();
        }
        break;

        case 1: if(element > medium){
            mini.push(element);
            medium=(mini.top() + maxi.top())/2;
        }
        else{
            mini.push(maxi.top());
            maxi.pop();
            maxi.push(element);
            medium=(mini.top() + maxi.top())/2;
        }
        break;
        case -1: if(element >medium){
            maxi.push(mini.top());
            maxi.pop();
            maxi.push(element);
            medium=(mini.top() + maxi.top())/2;
        }
        else{
            maxi.push(element);
            medium=(mini.top() + maxi.top())/2;
        }
        break;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    priority_queue<int> maxheap;
    double medium=0;
    priority_queue<int,vector<int>,greater<int>> minheap;

    for(int i=0;i<n;i++){
        calMedium(arr[i],maxheap,minheap,medium);
        ans.push_back(medium);
    }
    for (double m : ans) {
        cout << m << " ";
    }

    cout << endl;


}