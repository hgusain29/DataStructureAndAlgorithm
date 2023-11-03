#include<bits/stdc++.h>
using namespace std;

int Binarysearch(vector<int> arr, int n , int target,int low,int high)
{
    /*int low = 0 ;
    int high = n-1 ;*/
     
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
            cout<< mid;
        }
        if(target>arr[mid])
        {
          
            return Binarysearch(arr ,  n ,  target , mid+1 , high );
        }
        else
        {
            return Binarysearch(arr,  n ,  target , low , mid-1 );
        }

    } 
    return 0;
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
    int low = 0 ;
    int high = n-1 ;
    Binarysearch(arr , n , target,low,high);


    return 0;
}    