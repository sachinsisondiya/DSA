//#include<iostream>
//#include<vector>
//using namespace std;
//class node{
//    public:
//    int data;
//    node*left;
//    node*right;
//    node(int data){
//        this->data=data;
//        this->left=NULL;
//        this->right=NULL;
//    }
//};
//node* built(){
//    int data;
//    cin>>data;
//
//    if(data==-1){
//        return NULL;
//    }
//
//    node* root=new node(data);
//
//    root->left=built();
//    root->right=built();
//
//    return root;
//    }
//void leftview(node* root,vector<int> &ans,int hd){
//
//    if(root==NULL){
//        return ;
//    }
//    if(hd==ans.size()){
//        ans.push_back(root->data);
//    }
//    leftview(root->left,ans,hd+1);
//    leftview(root->right,ans,hd+1);
//
//
//
//}
//int main(){
//    node* root=built();
//    vector<int> ans;
//
//    leftview(root,ans,0);
//
//    for(auto it:ans){
//        cout<<it;
//    }
//
//}
