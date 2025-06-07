#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* built(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }

    node* root=new node(data);
    root->left=built();
    root->right=built();
    return root;
}
int count(node* root){
    int cnt;
    if(root==NULL){
        return 0;
    }
    cnt=1+ count(root->left) + count(root->right);
    return cnt;
}
bool iscbt(node* root,int i,int cntnodes){
    if(root==NULL){
        return true;
    }

     if(i>cntnodes){
        return false;
    }
    else{
        bool left= iscbt(root->left,2*i +1,cntnodes);
        bool right= iscbt(root->right,2*i +2,cntnodes);
        return (left && right);
    }
}
bool isheap(node* root){
    if(root->left ==NULL && root->right ==NULL){
        return true;
    }

    if(root->right==NULL){
        return (root->left->data <root->data);
    }
    else{
        bool left=isheap(root->left);
        bool right=isheap(root->right);

        return (left && right &&(root->data >root->left->data &&
        root->data > root->right->data));
    }
}
int main(){

    node* root=built();
    int nodes=count(root);
    int i=0;
    bool prop=iscbt(root,i,nodes);
    bool prop2=isheap(root);

    if(prop && prop2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
            return 0;
}