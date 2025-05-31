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
void inorder(node *root, vector<int> &a){
    if(root==NULL){
        return ;
    }
    node*temp=root;
    inorder(temp->left,a);
    a.push_back(temp->data);
    inorder(temp->right,a);
}
node* inordertobst(vector<int> ans,int s,int e){

    if(s>e) {
        return NULL;
    }
    int mid=(s+e)/2;

    node* root=new node(ans[mid]);

    root->left= inordertobst(ans,s,mid-1);
    root->right= inordertobst(ans,mid+1,e);
    return root;
}
void printf(node *root){
    if(root==NULL){
        return ;
    }
    node*temp=root;
    printf(temp->left);
    cout<<temp->data<<" ";
    printf(temp->right);
}


int main() {
    node *root = built();
    vector<int> ans;
    inorder(root, ans);
    int s= 0;
    int e=ans.size()-1;
    node* newroot=inordertobst(ans,s,e);
    printf(newroot);

}