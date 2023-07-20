#include<bits/stdc++.h>
using namespace std;
//strucure of node initialisation.
struct node {
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//main function to send to other function
node *insertAtPos(node* head ,int value , int pos){
    node* temp = new node(value);
    if(head==NULL){
        if(pos=1){return temp ;}
        else return head;
        }
        if(pos==1){
            temp->next=head;
            return temp ;
        }
        node* curr = head;
        for(int i = 1 ; i < pos-1; i++){
            curr=curr->next;
            if(curr==NULL){
                cout<<"pos out of range"<<endl;
                return head;
            }
        }
        temp->next=curr->next;
        curr->next=temp ;
        return head;
     }

void printlist(node *head){
    node* curr = head ;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }cout<<endl;
}
int main(){
    node* head = new node(30);
    head->next = new node (40);
    head->next->next = new node(50);
    printlist(head);
    head = insertAtPos(head,24,4);
    printlist(head);
return 0 ;
}