//#include<iostream>
//#include<vector>
//#include<queue>
//#include<map>
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
//void topview(node* root,vector<int> &ans){
//
//    map<int ,int> nodes;
//    queue<pair<node*,int>> q;
//    q.push(make_pair(root,0));
//
//    while(!q.empty()){
//        pair<node*,int> n = q.front();
//        q.pop();
//
//        node*curr=n.first;
//        int hd=n.second;
//
//        if(nodes.find(hd)==nodes.end()){
//            nodes[hd]=curr->data;
//        }
//        if(curr->left){
//            q.push(make_pair(curr->left,hd-1));
//        }
//        if(curr->right){
//            q.push(make_pair(curr->right,hd+1));
//        }
//    }
//    for(auto i:nodes){
//        ans.push_back(i.second);
//    }
//
//}
//int main(){
//    node* root=built();
//    vector<int> ans;
//
//    topview(root,ans);
//
//    for(int i=0;i<ans.size();i++){
//        cout<<ans[i];
//    }
//
//    return 0;
//
//};