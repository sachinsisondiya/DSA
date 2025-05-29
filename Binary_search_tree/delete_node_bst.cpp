#include<iostream>
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
node* bst(node* root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }


    if(root->data >data){
        root->left=bst(root->left,data);
        return root;
    }
    if(root->data < data){
        root->right=bst(root->right,data);
        return root;
    }
    return root;

}

node* built(node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=bst(root,data);
        cin>>data;
    }
    return root;
}
void levelorder(node* root){
    if(root==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout<<temp->data<<" ";

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }

    }

}
node* succ(node* root) {
    node*curr=root->left;
    while(curr!=NULL){
        curr=curr->left;
    }
    return curr;

}
node* del(node* root, int val){
   if (root==NULL){
       return root;
   }
   if(root->data==val){

    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;

    }
    else if(root->left!=NULL && root->right==NULL){
        node*temp=root->left;
        delete root;
        return temp;
    }
    else if(root->left==NULL && root->right!=NULL){
        node*temp=root->right;
        delete root;
        return temp;

    }
    else if(root->left!=NULL && root->right!=NULL){
        int min= succ(root->right)->data;
        root->data=min;
        root->right= del(root->right,min);
        return root;
    }}
   else if(root->data > val){
       root->left= del(root->left,val);
   }
   else{
       root->right=del(root->right,val);
   }
   return root;
}
int main(){
    node* root=NULL;
    built(root);
    levelorder(root);
    int val=110;
    del(root,val);
    cout<<endl;
    levelorder(root);

}