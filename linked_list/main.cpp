// delete node in linked list
#include <iostream>
#include<vector>
using namespace std;
class node{
public:
    int data;
    node* next;

    node(int data1){
        data = data1;
        next = NULL;
    }
};

void insert(node* head , vector<int> a){
    if(head ==NULL){
        return ;
    }
    node* temp = head;
    for(int i=1;i<a.size();i++){
        node* curr = new node(a[i]);
         temp->next = curr;
        temp = temp->next;
    }

}
bool isPresent(node *head , int val){
    if(head ==NULL){
        return false;
    }

    node* temp = head;
    while(temp != NULL){
        if(temp -> data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
 void printf(node* head){
    if(head == NULL){
        return ;
    }

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
}
int len(node* head){
    if(head == NULL){
        return 0;
    }
    int count = 0;

    node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp ->next;
    }
    cout<<endl;
    return count;
}


int main() {

    vector<int> a = {1,2,3,5};
    node* head =  new node(a[0]);
    insert(head , a);
    printf(head);
    int length = len(head);
    cout<<length<<endl;
    if( isPresent(head , 8)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

    return 0;



}
