#include<bits/stdc++.h>

using namespace std;
struct node{
    int data ;
    node* next1 ; 
    node* next2 ;
    node(int data){
        this->data = data ;
        this->next1 = NULL;
        this->next2 = NULL;
    }
};
node* Linkfunc(node* head ){

        node* joint = head;
        node* curr1 = head ;
        node* curr2 ;
        while(curr1->next1!=NULL){
            if(curr1->next2){
                curr2 = curr1 ; 
                while(curr2->next2!=NULL){
                    curr2 = curr2->next2;
                }
            curr2->next2 = curr1->next1;
            curr1 = curr1->next1 ;
            joint->next1 = NULL;
            joint = curr1;
            }else {
                curr1 = curr1 ->next1;
                joint->next2 = joint->next1;
                joint->next1 = NULL;
                joint = curr1;
                }
        
    }
        return head ;
}


void printlist(node *head){
        node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next1;
        }
}


int main(){
node* head = new node(1);
head->next1 = new node(4);
head->next1->next1 = new node(5);
head->next1->next1->next1 = new node(6);
head->next1->next1->next1->next1  = new node(8);
head->next2 = new node(2);
head->next2->next2 = new node(3);
head->next1->next1->next1->next2 = new node (7);

head = Linkfunc(head);
printlist(head);



return 0;
}