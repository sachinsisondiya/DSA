#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* insertinbst(node* root,int val){
    if(root==NULL){
        root=new node(val);
        return root;
    }
    if(root->data> val){
        root->left=insertinbst(root->left,val);
        return root;
    }

    if(root->data< val){
        root->right=insertinbst(root->right,val);
        return root;
    }
    return root;
}
void makebst(node* &root){
    int data;
    cin>>data;

    while(data!=-1){
         root=insertinbst(root,data);
         cin>>data;
    }
}
void levelorder(node* root){
    if(root==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout<<temp->data<<" ";

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }

    }

}
void preorder(node* root){
    if(root==NULL){
        return ;
    }

    preorder(root->left);
    cout<<root->data;
    preorder(root->right);
}
// this is recursive way t.c=o(h) s.c=0(n)
//bool searchinbst(node* root,int val){
//    if(root==NULL){
//        return false;
//    }
//    if(root->data==val){
//        return true;
//    }
//    if(root->data > val) {
//        return searchinbst(root->left, val);
//    }
//    else{
//       return  searchinbst(root->right,val);
//    }
//}
// this is iterative method t.c=o(logn) s.c=o(1)
bool searchinbst(node* root,int val){
    if(root==NULL){
        return false ;
    }
    node* temp=root;
    while(temp!=NULL){
        if(temp->data==val){
            return true;
        }
        if(root->data > val){
            temp=temp->left;
        }
        if(root->data < val){
            temp=temp->right;
        }
    }
    return false;
}
// for  minimum element of the tree
int min(node* root){
    if(root==NULL){
        return 0;
    }
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp->data;
}
// for maximum element in tree
int max(node* root){
    if(root==NULL){
        return 0;
    }
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp->data;
}
//succesor and predeccor

pair<int,int>preandsuc(node* root, int ele){
    pair<int,int>p= make_pair(0,0);


    node* curr=root;
    while(curr!=NULL){
        if(curr->data==ele){

            if(curr->left){
                p.first= max(curr->left);
            }
            if(curr->right){
                p.second=min(curr->right);

            }
            break;

        }
        else if(curr->data > ele){
                p.second=curr->data;
                curr=curr->left;
            }
        else if(curr->data < ele) {
                p.first = curr->data;
                curr=curr->right;
            }
    }
    return p;
}


int main(){

    node* root=NULL;
    makebst(root);

    levelorder(root);

    int val=30;

    preorder(root);
    cout<<endl;
    if(searchinbst(root,val)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    cout<<endl;

    int minimum=min(root);
    cout<<minimum<<endl;

    int maximum=max(root);
    cout<<maximum<<endl;
    int element= 20;
    pair<int,int >p= preandsuc(root,element);

    cout<<p.first<<"prece";
    cout<<endl;
    cout<<p.second<<"succe";

    return 0;

}