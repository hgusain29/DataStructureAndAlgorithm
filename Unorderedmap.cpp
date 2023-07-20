#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> um;
    um["HI"]=10;
    um["my"]=20;
    um["name"]=30;
    if(um.find("HI")!=um.end()){
        cout<<"the key is present\n";
        
    }else{
        cout<<"The key is present\n";

    }
    auto it = um.find("Hi");
    if(it!=um.end()){
        cout<<"key is "<<it->first<<", "
        <<"value is"<<it->second;
    }



return 0;
}