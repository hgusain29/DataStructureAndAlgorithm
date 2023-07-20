#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int *arr;
    int cap;
    int top ;
    Stack(int cap){
        this->cap = cap;
        this->arr = new int[cap];
        this->top =-1;
    }

void push(int x){
    if(top==cap-1){ 
        cout<<"Stack Overflow";
    return;
    }
    top++;
    arr[top]=x;
}
void pop(){

    int res = arr[top];
    top--;
   // return res;  

}

int peek(){ 
    return arr[top];
}
 int size(){
    return (top+1);

 }
};
int main(){
    Stack s(5);
    s.push(20);
    s.push(5);
    s.push(33);
    s.push(30);
    //cout<<s<<endl;
    cout<<s.peek()<<endl;
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
return 0;
}