#include<iostream>
using namespace std;
class node {
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

class info{
public:
    int min;
    int max;
    bool isvalid;
    int size;
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
info largest(node* root,int & ans){
    if(root==NULL){
        return {INT_MAX,INT_MIN,true,0};
    }
    info left= largest(root->left,ans);
    info right= largest(root->right,ans);

    info currnode;

    currnode.size=left.size + right.size +1;
    currnode.max=max(root->data,right.max);
    currnode.min=min(root->data,left.min);

    if(left.isvalid && right.isvalid && (root->data > left.max && root->data < right.min)){
        currnode.isvalid =true;
    }
    else{
        currnode.isvalid=false;
    }
    if(currnode.isvalid){
        ans= max(ans,currnode.size);
    }

    return currnode;

}
int main(){
    node* root=built();
    int maxsize=0;
    info temp= largest(root,maxsize);

    cout<<maxsize;




}