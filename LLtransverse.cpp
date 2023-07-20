#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data ;
    Node* Next;
    Node(int x){
        data = x;
        Next = NULL;
    } 
};
void printlist(Node *head){
    Node* curr = head ;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr = curr->Next;

    } 
}

int main(){
    Node *head = new Node(10);
    head->Next=new Node(20);
    head->Next->Next = new Node(30);
    head->Next->Next->Next=new Node(40);
    printlist(head);
    printlist(head);

return 0;
}