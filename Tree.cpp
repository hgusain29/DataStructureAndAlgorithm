#include<bits/stdc++.h>
using namespace std;
struct node{
    int key ;
    node* left ;
    node* right ;
    node(int key ){
        this->key = key ; 
        this->left = NULL;
        this->right = NULL;
    }
};
node inorder(node* root){
    if(root!=NULL)
    {inorder(root->left);
    cout<<root->key<<endl;
    inorder(root->right);}
return 0 ;
}
node preorder(node* root){
    if(root!=NULL)
    {cout<<root->key<<endl;
    preorder(root->left);
    preorder(root->right);}
return 0 ;
}
node postorder(node* root){
    if(root!=NULL)
    {postorder(root->left);
    postorder(root->right);
    cout<<root->key<<endl;}
return 0 ;
}
int main(){
node* root = new node ( 10);
root->left = new node(20);
root->right = new node (30);
root-> left -> left = new node (40);
preorder(root);
cout<<endl<<endl;
inorder(root);
cout<<endl<<endl;
postorder(root);
return 0;
}