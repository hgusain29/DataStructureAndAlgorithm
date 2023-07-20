#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node* next;
    node(int x){
        data = x ; 
        next = NULL;
    }
};
//node* head = NULL ;
void *inslast(node x ,node* head){
    node *curr = head;
    node* temp = new node(555);
    if(head==NULL){
        return temp ;
    }
    while(curr!=NULL){
        curr=curr->next;
    }
    curr->next = temp ;
    return head ;

}
void printlist(Node *head){
        //Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}


int main(){
    
    node* head = new node(40);
    head->next=new node(509);
    head->next->next=new node(324);
    head = inslast(40,head);
    printlist(head);




return 0;
}