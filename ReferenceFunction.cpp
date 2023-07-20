#include<bits/stdc++.h>
using namespace std;
int& ref(int a ){
    int& num = a;
    num++;
    cout<<a<<endl;
    return num;

}


int main(){
int c = 20;
cout<<ref(c)<<endl;
cout<<c;
return 0;
}