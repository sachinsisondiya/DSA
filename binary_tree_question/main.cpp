//#include<iostream>
//#include<vector>
//#include<queue>
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
//
//    node* root=new node(data);
//
//    root->left=build();
//    root->right=build();
//
//    return root;
//}
//vector<int> zig_zag(node* root){
//    vector<int> result;
//
//    if(root==NULL){
//        return result ;
//    }
//
//    queue<node*> q;
//    q.push(root);
//
//    bool lefttoright=true;
//
//    while(!q.empty()){
//
//        int size=q.size();
//        vector<int>ans(size);
//
//
//
//        for(int i=0;i<size;i++){
//
//            node* frontnode=q.front();
//            q.pop();
//
//            int index=lefttoright ? i : size-i-1;
//            ans[index]=frontnode->data;
//
//            if(frontnode->left){
//                q.push(frontnode->left);
//            }
//            if(frontnode->right){
//                q.push(frontnode->right);
//            }
//
//        }
//
//        for(auto i:ans){
//            result.push_back(i);
//        }
//        lefttoright = !lefttoright;
//
//    }
//    return result;
//
//
//
//}
//
//
//
//int main(){
//    node* root=build();
//    vector<int> q=zig_zag(root);
//    int s=q.size();
//    for(int i=0;i<s;i++){
//        cout<<q[i];
//    }
//
//
//
//}