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
node* build(){                 //1 2 4 -1 -1 5 -1 -1 5 4 -1 -1 7 -1 -1
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    node* root=new node(data);
    cout<<"enter the left element";
    root->left=build();
    cout<<"enter the right element";
    root->right=build();

    return root;


}
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);

    return max(left,right)+1;

}
int main(){
    node* root=build();
    cout<<endl;
    cout<<height(root);

}