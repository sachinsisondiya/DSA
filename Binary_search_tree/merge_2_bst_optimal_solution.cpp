#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* built(node* root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }

    if(root->data > data){
        root->left= built(root->left,data);
        return root;
    }
    if(root->data < data){
        root->right= built(root->right,data);
        return root;
    }
    return root;


}
node* make(node*& root){
    int data;
    cin>>data;
    while(data!=-1){
        root=built(root,data);
        cin>>data;
    }
    return root;
}
//convert bst into double linkedlist
void convertintosortedDLL(node* root,node* &head){
    if(root==NULL){
        return ;
    }

    convertintosortedDLL(root->right,head);

    root->right =head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertintosortedDLL(root->left,head);
}
node* merge(node* head1,node* head2){
    node* head=NULL;
    node* tail=NULL;
    while(head1!=NULL && head2!=NULL){

        if(head1->data < head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;

            }else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;

            }
        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;

            }else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;

            }

        }
    }
    while(head1!=NULL){
        tail->right=head1;
        head1->left=tail;
        tail=head1;
        head1=head1->right;
    }
    while(head2!=NULL){
        tail->right=head2;
        head2->left=tail;
        tail=head2;
        head2=head2->right;
    }
    return head;

}
void count(node* newroot,int &cnt){
    node* temp=newroot;
    while(temp!=NULL){
        cnt++;
        temp=temp->right;
    }
}
node* newbst(node* &head,int n ){
    if(n<=0 || head==NULL){
        return NULL;
    }

    node* left= newbst(head,n/2);
    node* root=head;
    root->left=left;
    head=head->right;

    root->right=newbst(head,n-n/2-1);
    return root;

}
void printf(node* root){
    if(root==NULL){
        return;
    }
//2 1 3 -1 -1 -1 -1
//4 -1 -1
    printf(root->left);
    cout<<root->data<<" ";
    printf(root->right);

}
int main(){
    node* root=NULL;
    node* root2=NULL;
    root=make(root);
    root2=make(root2);
    node* head1=NULL;
    node* head2=NULL;

    convertintosortedDLL(root,head1);
    convertintosortedDLL(root2,head2);
    int cnt=0;


    node* newroot=merge(head1,head2);
    count(newroot,cnt);

    node* root3=newbst(newroot,cnt);
    printf(root3);



}