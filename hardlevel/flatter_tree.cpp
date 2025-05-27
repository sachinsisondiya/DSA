//
// Created by sachi on 5/27/2025.
//
#include<iostream>
#include<vector>
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
node* flattern(node* &root){
    node* curr=root;

    while(curr!=NULL){
        if(curr->left){
            node*prev=curr->left;
            while(prev->right!=NULL){
                prev=prev->right;
            }
            prev->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;

            curr=curr->right;
        }
        else{
            curr=curr->right;
        }

    }
    return root;

}
void printf(node* root){
    node* curr=root;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}
int main(){
    node* root=built();
    flattern(root);
    printf(root);




}