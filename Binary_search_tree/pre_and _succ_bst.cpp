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
pair<int,int> preandsuc(node* root,int k){

    node* temp=root;
    int pre=0;
    int suc=0;


    while(temp->data!=k){
        if(temp->data >k){
            suc=temp->data;
            temp=temp->left;
        }
        else{
            pre=temp->data;
            temp=temp->right;
        }
    }
    node* leftnode=temp->left;
    node* rightnode=temp->right;
    while(leftnode!=NULL){
        pre=leftnode->data;
        leftnode=leftnode->right;
    }

    while(rightnode!=NULL){
        suc=rightnode->data;
        rightnode=rightnode->left;
    }

    return {pre,suc};
}
int main(){
        node* root=NULL;
        root=built(root);
        int k;
        cin>>k;
        pair<int,int> p=preandsuc(root,k);
        cout<<p.first<<" "<<p.second;

}

