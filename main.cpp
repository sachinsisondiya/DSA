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
//void longest(node*root,int &maxlen,int len,int sum,int &maxsum){
//    if(root==NULL){
//        if(len>maxlen){
//            maxlen=len;
//            maxsum=sum;
//        }
//        else if(len==maxlen){
//            maxsum=max(sum,maxsum);
//        }
//        return;
//    }
//    sum=sum+root->data;
//    longest(root->left,maxlen,len+1,sum,maxsum);
//    longest(root->right,maxlen,len+1,sum,maxsum);
//}
//int main(){
//    node* root=built();
//    int maxlen=0;
//    int len=0;
//    int sum=0;
//    int maxsum=INT_MIN;
//    longest(root,maxlen,len,sum,maxsum);
//    cout<<maxsum<<" "<<maxlen;
//    return 0;
//}