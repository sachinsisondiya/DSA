#include<iostream>
#include<climits>
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
}
node* built(node* &root){
    int data;
    cin>>data;

    while(data!= -1){
        bst(root,data);
        cin>>data;
    }
    return root;
}
node* ibuilt(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root=new node(data);
    root->left=ibuilt();
    root->right=ibuilt();

    return root;

}

bool isvalidate(node* root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data >min && root->data < max){
        bool left= isvalidate(root->left,min,root->data);
         bool right=isvalidate(root->right,root->data,max);
        return left && right;
    }
    return false;

}

int main(){
//    node* root=NULL;
//    root=built(root);
    node* root=ibuilt();

    int min=INT_MIN;
   int max=INT_MAX;

    if(isvalidate(root,min,max)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;

}