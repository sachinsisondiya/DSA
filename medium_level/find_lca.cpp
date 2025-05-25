//#include<iostream>
//#include<climits>
//
//using namespace std;
//class node{
//    public:
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
//    if(data==-1){
//        return NULL;
//    }
//    node* root=new node(data);
//    root->left=built();
//    root->right=built();
//
//    return root;
//}
//node* lca(node* root,int n1,int n2){
//    if(root==NULL){
//        return NULL;
//    }
//
//    if(root->data==n1 || root->data==n2){
//        return root;
//    }
//    node* ansleft=lca(root->left,n1,n2);
//    node* ansright=lca(root->right,n1,n2);
//
//    if(ansleft!=NULL && ansright!=NULL){
//        return root;
//    }
//    else if(ansright!=NULL && ansleft==NULL){
//        return ansright;
//    }
//    else if(ansleft!=NULL && ansright==NULL){
//        return ansleft;
//    }
//    else{
//        return NULL;
//    }
//
//}
//int main(){
//    node* root=built();
//    int n1=4;
//    int n2=21;
//    node* ans=lca(root,n1,n2);
//    cout<<ans->data;
//}