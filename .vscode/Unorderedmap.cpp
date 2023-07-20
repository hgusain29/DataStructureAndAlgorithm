#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> up;
    up["himanshu gusain"] = 10 ;
    up["radhe radhe"]=20;
    up["roger that"]=30;
    for(auto x : up){
        cout<<x.first<<"  "<<x.second<<endl;
    }

return 0;
}