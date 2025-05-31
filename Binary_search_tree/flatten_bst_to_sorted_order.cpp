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
node* bst(node* root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(root->data > data){
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
void inorder(node *root, vector<int> &a){
    if(root==NULL){
        return ;
    }
    node*temp=root;
    inorder(temp->left,a);
    a.push_back(temp->data);
    inorder(temp->right,a);
}

void printf(node* curr ){
    if(curr==NULL){
        return;
    }
    node* temp=curr;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}

int main() {
    node *root = NULL;
    root = built(root);
    int target;
    cin >> target;
    vector<int> ans;
    inorder(root, ans);
     node* newroot=new node(ans[0]);
     node* curr= newroot;

     for(int i=1;i<ans.size();i++){
         node* temp=new node(ans[i]);
         curr->left=NULL;
         curr->right=temp;
         curr=temp;
     }
     curr->left=NULL;
     curr->right=NULL;

     printf(newroot);
}