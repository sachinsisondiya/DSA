//#include<iostream>
//#include<vector>
//using namespace std;
//class node{
//public:
//    int data;
//    node* left;
//    node* right;
//    node(int data){
//        this->data=data;
//        this->left=NULL;
//        this->right=NULL;
//    }
//};
//node* build(){
//    int data;
//    cin>>data;
//
//    if(data==-1){
//        return NULL;
//    }
//    node* root=new node(data);
//
//    root->left=build();
//    root->right=build();
//
//    return root;
//}
//void leftprint(node*root,vector<int> &ans){
//    if(root==NULL || root->left==NULL && root->right==NULL){
//        return ;
//    }
//    ans.push_back(root->data);
//    if(root->left) {
//        leftprint(root->left,ans);
//    }
//    else{
//        leftprint(root->right,ans);
//    }
//}
//void leafprint(node* root,vector<int> &ans){
//    if(root==NULL){
//        return;
//    }
//    if(root->left==NULL && root->right== NULL){
//        ans.push_back(root->data);
//    }
//    leafprint(root->left,ans);
//    leafprint(root->right,ans);
//}
//
//void righttoleft(node*root,vector<int> &ans){
//    if(root==NULL || root->left==NULL && root->right== NULL){
//        return;
//    }
//    if(root->right){
//        righttoleft(root->right,ans);
//        ans.push_back(root->data);
//    }else if(root->left){
//        righttoleft(root->left,ans);
//        ans.push_back(root->data);
//    }   // intresting question  take me 1.5 hr
//
//}
//int main(){
//    node* root=build();
//    vector<int>ans;
//    ans.push_back(root->data);
//    // left->data
//    leftprint(root->left,ans);
//    // leaf node
//    leafprint(root,ans);
//    // right->data
//
//    righttoleft(root->right,ans);
//
//    for(int i=0;i<ans.size();i++){
//        cout<<ans[i];
//    }
//
//}