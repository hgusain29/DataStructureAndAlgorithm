#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    } 
};
void printlist(node* head){

   

    node* curr = head ;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr = curr->next;

    } 
}
node* delnode(node* head )
{
    if(head == NULL)return NULL;
    if(head->next==NULL){return NULL;delete head;}
    node* curr = head;
    while (curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

int main(){
    node* head = new node (10);
    head->next = new node(30);
    head->next->next = new node(50);
    head->next->next->next = new node (11);
//printlist(head);
head = delnode(head);
printlist(head);


return 0;
}