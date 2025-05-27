//#include<iostream>
//#include<vector>
//using namespace std;
//class node{
//public:
//    int data;
//    node* left;
//    node* right;
//
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
//vector<int> morris(node* root){
//    node* curr=root;
//    vector<int> ans;
//
//    while(curr!=NULL){
//        if(curr->left==NULL){
//            ans.push_back(curr->data);
//            curr=curr->right;
//        }
//        else{
//            node* prev=curr->left;
//            while(prev->right!=NULL && prev->right !=curr){
//                prev=prev->right;
//            }
//
//            if(prev->right==NULL){
//                prev->right=curr;
//                curr=curr->left;
//            }
//            else{
//                prev->right=NULL;
//                curr=curr->right;
//            }
//        }
//
//    }
//    return ans;
//
//}
//int main(){
//    node* root=built();
//
//    vector<int> ans=morris(root);
//    for(auto it: ans){
//        cout<<it;
//    }
//
//}