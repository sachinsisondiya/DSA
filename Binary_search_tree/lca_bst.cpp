#include<iostream>
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
node* bst(node* root,int val){
    if(root==NULL){
        root=new node(val);
        return root;
    }
    if(root->data > val){
        root->left=bst(root->left,val);
        return root;
    }
    if(root->data <val){
        root->right=bst(root->right,val);
        return root;
    }
    return root;
}

node* built(node* &root){
    int data;
    cin>>data;

    while(data!= -1){
        root= bst(root,data);
        cin>>data;
    }
    return root;
}
//recursive
//node *lca(node* root,node* p,node*a){
//    if(root==NULL){
//        return NULL;
//    }
//
//    if(root->data > p->data && root->data >a->data){
//        root=lca(root->left,p,a);
//    }
//    if(root->data < p->data && root->data < a->data){
//        root=lca(root->right,p,a);
//    }
//    if(root->data > p->data && root->data <a->data || root->data < p->data && root->data >a->data){
//        return root;
//    }
//}
// iterative way
node *lca(node* root,node* p,node*a){

    while(root!=NULL){
        if(root->data > p->data && root->data >a->data){
        root=root->left;
    }
        else if(root->data < p->data && root->data < a->data){
           root= root->right;
    }
        else{

            return root;
        }
    }
    return root;
}
int main(){
    node* root=NULL;
    node* p=NULL;
    node* a=NULL;
    root= built(root);
    p=built(p);
    a=built(a);

   node* ans= lca(root,p,a);
   cout<<ans->data;


}