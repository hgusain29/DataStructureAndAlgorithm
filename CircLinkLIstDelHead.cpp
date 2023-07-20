#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void print(node *head){
    if(head == NULL )return ;
    node* curr = head ;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr!=head);
}
node *DelLasNode(node *head ){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* curr = head;
    
while(curr->next->next!=head){
    curr=curr->next;
}if(curr->next->next=head){
    node* temp = curr->next;
    delete temp;
}
curr->next=head;
return head;

}
int main(){
    node* head = new node(10);
    head->next=new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(60);
    head->next->next->next->next=head ;
    print(head);
    cout<<endl<<"After Deletion"<<endl;
    head = DelLasNode(head);
    print(head); 
    cout<<endl<<"Again After Deletion"<<endl;  
    head = DelLasNode(head);
    print(head); 
return 0;
}