#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[] ,int n){
for(int i = 1 ; i < n ; i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1] = key;
}
cout<<"Sorted Array is : "<<endl;
for(int i = 0 ; i < n ; i++){
cout<<arr[i];
if(i!=n-1){
    cout<<",";
}
}
}
int main(){
int arr[8] ;
for (int i = 0 ; i < 8 ; i++){
    cout<<"Enter the value for array indx "<<i<<endl;
    cin>>arr[i];
}
InsertionSort(arr , 8 );



return 0;
}