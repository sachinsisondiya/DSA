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
node* build(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    node* root = new node(data);
    cout<<"enter the left element";
    root->left=build();
    cout<<"enter the right element";
    root->right=build();

    return root;
}

pair<int,int> diameter(node* root){   //1 2 4 -1 -1 5 -1 -1 5 4 -1 -1 7 -1 -1
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameter(root->left);
    pair<int,int> right=diameter(root->right);

    int a=left.first;
    int b=right.first;
    int c= (left.second + right.second) +1;

    pair<int,int> ans;
    ans.first=max(a,max(b,c));
    ans.second=max(left.second , right.second) +1;
    return ans;
}
int dia(node* root){
    return diameter(root).first;
}
int main(){
    node* root=build();
    cout<<dia(root);
    return 0;
}