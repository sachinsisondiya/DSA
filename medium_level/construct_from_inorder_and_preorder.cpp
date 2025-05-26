//#include<iostream>
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
////node* built(){
////    int data;
////    cin>>data;
////
////    if(data==-1){
////        return NULL;
////    }
////
////    node* root=new node(data);
////
////    root->left=built();
////    root->right=built();
////
////    return root;
////}
//
//int find(int arr1[],int start,int end,int element){
//
//    for(int i=start;i<=end;i++){
//        if(element==arr1[i]){
//            return i;
//        }
//    }
//    return -1;
//}
//node* postorder(int arr1[],int arr2[],int &prestart,int instart,int inend,int n){
//    // base case
//    if(prestart>=n || instart> inend){
//        return NULL;
//    }
//    int element= arr2[prestart++];
//    node* root=new node(element);
//
//    int index=find(arr1,instart,inend,element);
//    root->left=postorder(arr1,arr2,prestart,instart,index-1,n);
//    root->right=postorder(arr1,arr2,prestart,index+1,inend,n);
//
//    return root;
//
//}
//void printf(node *root){
//    if(root==NULL){
//        return;
//    }
//    printf(root->left);
//    printf(root->right);
//    cout<<root->data<<" ";
//}
//int main(){
//    int n;
//    cin>>n;
//    int arr1[10];
//    int arr2[10];
//
//    for(int i=0;i<n;i++){
//        cout<<"enter the inorder element";
//        cin>>arr1[i];
//    }
//    cout<<endl;
//
//    for(int i=0;i<n;i++){
//        cout<<"enter the preorder element";
//        cin>>arr2[i];
//    }
//    cout<<endl;
//    int prestart=0;
//
//
//    node* root=postorder(arr1,arr2,prestart,0,n-1,n);
//    printf(root);
//
//
//
//
//
//
//}