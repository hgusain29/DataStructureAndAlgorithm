#include<bits/stdc++.h>
#include<vector>
using namespace std;


void Binarysearch(vector<int> arr, int n , int target)
{
    int low = 0 ;
    int high = n-1 ;
     
    while(low<high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
            cout<<endl;
            cout<<mid;
        }
        if(target>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high = mid-1;
        }

    } 
}

int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n) ;

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Target";
    cin>>target;
    Binarysearch(arr , n , target);


    return 0;
}