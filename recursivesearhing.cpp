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

   // node* head = NULL;
void printlist(node* head){
    node* curr = head ;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr = curr->next;

    } 
}
int searchvalue(node* head , int x ){
    if(head==NULL)return -1;
    if(head->data == x  ) return 1 ;
    else{
        int res = searchvalue(head->next,x);
        if(res==-1)return -1;
        else return res+1;
    }
    }
int main(){
    node* head = new node (10);
    head->next = new node(30);
    head->next->next = new node(50);
    head->next->next->next = new node (11);
    printlist(head);
    cout<<endl;
    cout<<searchvalue(head,30);
    
return 0;
}