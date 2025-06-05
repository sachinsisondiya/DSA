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
//node* built(node* root, int data){
//    if(root==NULL){
//        root=new node(data);
//        return root;
//    }
//
//    if(root->data > data){
//        root->left= built(root->left,data);
//        return root;
//    }
//    if(root->data < data){
//        root->right= built(root->right,data);
//        return root;
//    }
//    return root;
//
//
//}
//node* make(node*& root){
//    int data;
//    cin>>data;
//    while(data!=-1){
//        root=built(root,data);
//        cin>>data;
//    }
//    return root;
//}
//void solve(node* root,vector<int> &ans){
//    if(root==NULL){
//        return;
//    }
//    solve(root->left,ans);
//    ans.push_back(root->data);
//    solve(root->right,ans);
//}
//vector<int> mergevec(vector<int>a,vector<int> b){
//    vector<int> c;
//    int i=0;
//    int j=0;
//    while(i<a.size() && j<b.size() ){
//
//        if(a[i]< b[j]){
//            c.push_back(a[i++]);
//        }
//        else{
//            c.push_back(b[j++]);
//        }
//    }
//    while(i<a.size()){
//           c.push_back(a[i++]);
//    }
//    while(j<b.size()){
//        c.push_back(b[j++]);
//
//    }
//    return c;
//}
//node* ino(vector<int> &ans,int start,int end ){
//
//    int mid= (start+end)/2;
//    if(start>end){
//        return NULL;
//    }
//    node* root=new node(ans[mid]);
//
//    root->left=ino(ans,start,mid-1);
//    root->right=ino(ans,mid+1,end);
//    return root;
//
//
//}
//void printf(node* root){
//    if(root==NULL){
//        return ;
//    }
//    printf(root->left);
//    cout<<root->data<<" ";
//    printf(root->right);
//}
//
//
//int main(){
//    node* root1=NULL;
//    node* root2=NULL;
//    vector<int> ans1;
//    vector<int> ans2;
//    make(root1);
//    make(root2);
//
//    solve(root1,ans1);
//    solve(root2,ans2);
//
//    vector<int> ans3=mergevec(ans1,ans2);
//    int start=0;
//    int end=ans3.size()-1;
//    node* temp=ino(ans3,start,end);
//    cout<<"enter";
//    printf(temp);
//
//
//
//}