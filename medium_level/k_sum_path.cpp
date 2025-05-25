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
//}
//void sumpath(node* root,vector<int> ans,int &count,int k){
////    if(root==NULL){
//        return;
//    }
//    ans.push_back(root->data);
//    sumpath(root->left,ans,count,k);
//    sumpath(root->right,ans,count,k);
//    int size=ans.size()-1;
//    int sum=0;
//
//    for(int i=size;i>=0;i--){
//        sum+=ans[i];
//        if(sum==k){
//            count++;
//        }
//    }
//    ans.pop_back();
//
//}
//
//int main(){
//    node* root=built();
//    int count=0;
//    vector<int> ans;
//    int k=5;
//    sumpath(root,ans,count,k);
//    cout<<count;
//
//}