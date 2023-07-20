#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head = NULL;

void insbeg(int data){
    node* newnode = new node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
void printf(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
   int n ;
   cin>>n;
   for(int i = 0 ; i < n ; i++){
    int x ;
    cin>>x;
    insbeg(x);
   }
printf();


return 0;
}