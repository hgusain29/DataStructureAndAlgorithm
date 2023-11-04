#include<bits/stdc++.h>
using namespace std;
             

int main()
{
    int x = 200 ;
    vector<pair<int,int>> p ;
    for(int i = 0 ; i < x ; i++ )
    {
        pair<int,int> p1 ;
        p1.first = 32+2*i ;
        p1.second = 32+3*i ;
        p.push_back(p1);
        
    }
    for(int i = 0 ; i < x ; i++)
    {
        cout<<p[i].first<<" "<<p[i].second ;
        cout<<endl;
    }
  
    return 0;
}