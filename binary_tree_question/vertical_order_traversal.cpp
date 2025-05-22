#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* build(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root=new node(data);
    root->left=build();
    root->right=build();

    return root;
}
vector<int> answer(node* root){
    map<int,map< int,vector<int> > > n;
    queue<pair<node* , pair<int,int> > > q;
    vector<int> ans;

    if(root==NULL){
        return ans;
    }
    q.push({root, {0,0}});
    while(!q.empty()){
        pair<node*,pair<int,int>> temp=q.front();
        q.pop();
        node* curr=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.second;

        n[hd][lvl].push_back(curr->data);

        if(curr->left){
            q.push({curr->left,{hd-1,lvl+1}});
        }
        if(curr->right){
            q.push({curr->right,{hd+1,lvl+1}});
        }

    }
    for(auto i:n){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}


int main(){
    node* root=build();
    vector<int> q=answer(root);
    for(int i=0;i<q.size();i++){
        cout<<q[i];
    }
    return 0;
};