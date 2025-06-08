#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class node{
public:
    int data;
    int i;
    int j;

    node(int data,int row,int col){
        this->data=data;
        i=row;
        j=col;
    }
};
class compare{
public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
};
int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> karray(n,vector<int>(k));

    for(int i=0;i<n;i++){
        for (int j=0;j<k;j++){
            cin>>karray[i][j];
        }

    }
    vector<int> ans;

    priority_queue<node*,vector<node*>,compare> minHeap;
    for(int i=0;i<n;i++){
        //node* temp = new node(karray[i][0], i, 0);

         node* temp=new node(karray[i][0], i, 0);
        minHeap.push(temp);
    }

    //step2
    while(minHeap.size() >0){
        node* temp=minHeap.top();

        ans.push_back(temp->data);
        minHeap.pop();

        int i=temp->i;
        int j=temp->j;

        if(j+1 <karray[i].size()){
            node* next=new node(karray[i][j+1],i,j+1);
            minHeap.push(next);
        }
    }

    for (int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

}