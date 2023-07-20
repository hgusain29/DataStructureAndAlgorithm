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
    else{
        node* temp = head->next ;
        delete head;
        return temp;
    }
}
int main(){

head = delnode(head);


return 0;
}