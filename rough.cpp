#include<bits/stdc++.h>
using namespace std;
class salary {
    private:
    int sal = 1000;
    public:
    friend int increment(salary s); 
};
int increment(salary s ){
    s.sal = s.sal+7000;
    return s.sal; 
}
int main(){
salary s ;
cout<<increment(s);
return 0;



return 0;
}