#include<iostream>
#include <climits>
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
node* anscestor(node* root,int &k,int n){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n){
       return root;
    }

    node*ansleft= anscestor(root->left,k,n);
    node*ansright= anscestor(root->right,k,n);

    if(ansleft!=NULL && ansright==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return ansleft;

    }
    if(ansright!=NULL  && ansleft==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return ansright;
    }
    return NULL;

}
int main(){
    node* root=built();
    int k=2;
    int n=4;
    node* ans=anscestor(root,k,n);
    cout<<ans->data;



}