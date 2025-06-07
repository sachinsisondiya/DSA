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
node* built() {
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    node* root=new node(data);
    root->left=built();
    root->right=built();
    return root;
}
void inorder(node* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);

}
void preorder(node* &root,int &index,vector<int> ans){
    if(root==NULL){
        return;
    }
    root->data=ans[index++];
    preorder(root->left,index,ans);
    preorder(root->right,index,ans);

}

void printf(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";


    printf(root->left);

    printf(root->right);

}

int main(){
    node* root=built();
    vector<int> ans;

    inorder(root,ans);

    int index=0;

    preorder(root,index,ans);
    printf(root);

    return 0;

}