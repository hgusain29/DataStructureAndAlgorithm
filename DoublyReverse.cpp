#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node* next;
    node* prev;
    node(int x){
        data = x;
        next = NULL;
        prev=NULL;
    } 
};
node *reverse(node* head){
   // node* curr = head;
    node* prev = NULL;
node* curr = head ;
if(head==NULL||head->next==NULL)return head ;
while (curr!=NULL){
    prev=curr->prev;
    curr->prev=curr->next;
    curr->next=prev;
    curr=curr->prev;
}

return prev->prev;
}
void printlist(node* head){

     node* curr = head ;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr = curr->next;
        }
    } 

int main(){
    node* prev =NULL;
    node* head = new node (10);
    node* temp1 = new node(20);
    node* temp2 = new node(30);
    head->next=temp1;
    head->prev=NULL;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=NULL;


    head = reverse(head);
    printlist(head);



return 0;
}