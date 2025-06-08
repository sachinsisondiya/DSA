#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class compare{
public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
};
void printf(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<node* >karrays(n);


    for(int j=0;j<n;j++){
       int d;
       cin>>d;
       node* head=NULL;
       node* tail=NULL;

       for (int i=0;i<d;i++){

           int data;
           cin>>data;
           node* newnode=new node(data);
           if(head==NULL){
               head=newnode;
               tail=newnode;
           }
           else{
               tail->next=newnode;
               tail=newnode;
           }
       }
       karrays[j]=head;
    }

    priority_queue<node*,vector<node*> ,compare>pq;
    for (int i = 0; i < n; i++) {
        if (karrays[i] != NULL) {
            pq.push(karrays[i]);
        }
    }

    node* head = NULL;
    node* tail = NULL;

    while (!pq.empty()) {
        node* top = pq.top();
        pq.pop();

        if (head == NULL) {
            head = top;
            tail = top;
        } else {
            tail->next = top;
            tail = top;
        }

        if (top->next != NULL) {
            pq.push(top->next);
        }
    }

    printf(head);

}