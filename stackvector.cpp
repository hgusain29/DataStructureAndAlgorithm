#include<bits/stdc++.h>
using namespace std;
struct Stack{
vector<int> v;
void push(int x ){
    cout<<x<<endl;
    v.push_back(x);
}
int pop(){
    v.pop_back();
}
int peek(){
    return v.back();

}
int size(){
    return v.size();
}
bool isEmpty(){
    return v.empty();
}
};
int main(){
    Stack a;
    a.push(143);
    a.push(256);
    a.push(334);
    a.push(434);
    a.pop();
    cout<<a.peek()<<" ";
    cout<<a.size()<<" ";
return 0;
}