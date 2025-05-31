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
bool ispresent(vector<int> ans,int target){
    int size=ans.size()-1;
    int i=0;
    int sum;
    while(i<size){

        sum = ans[i] + ans[size];
        if(sum==target){
            return true;
        }
        else if(sum > target){
            size--;
        }
        else{
            i++;
        }
    }
    return false;

}
int main(){
    node* root=NULL;
    root= built(root);
    int target;
    cin>>target;
    vector<int> ans;
    inorder(root,ans);

    if(ispresent(ans,target)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;





}