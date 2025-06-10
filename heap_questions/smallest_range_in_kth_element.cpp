#include<iostream>
#include<limits.h>
#include<queue>
#include<vector>
using namespace std;
class node{
public:
    int data;
    int row,col;
    node(int d,int r,int c){
        this->data=d;
        this->row=r;
        this->col=c;
    }
};
class compare{
public:
    bool operator()(node* a,node* b){
        return a->data > b->data;
    }
};
int main(){
    int k;
    cin>>k;
    vector<vector<int>>a;
    for(int i=0;i<k;i++){
        int d;
        cin>>d;
        vector<int> temp;
        for(int j=0;j<d;j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        a.push_back(temp);

    }

    priority_queue<node*,vector<node* >,compare>pq;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    //push element in queue
    for(int i=0;i<k;i++){
        int element=a[i][0];
        maxi=max(maxi,element);
        mini=min(mini,element);
        pq.push(new node(element,i,0));
    }

    int start=mini,end =maxi;
    // process range
    while(!pq.empty()){
        node* temp=pq.top();
        pq.pop();
        mini=temp->data;
        if(maxi -mini < end - start)
        {
            start=mini;
            end=maxi;
        }
        //next element exists
        if(temp->col + 1 < a[temp->row].size())
        {
            maxi=max(maxi,a[temp->row][temp->col+1] );
            pq.push(new node(a[temp->row][temp->col+1] ,temp->row,temp->col+1));

        }
        else{
            //next element does exists
            break;
        }
    }
    int ans=(end-start) +1;

    cout<<ans;



}