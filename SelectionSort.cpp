#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
int temp[n];
for(int i = 0 ; i < n ; i++ ){
int min = 0 ;
    for(int j = 1 ; j < n ; j++){
        if(arr[min]>arr[j]){
            min=j;
            temp[i]=arr[min];
            arr[min] = INT_MAX;

        }
    }
}
for(int i = 0 ; i < n ; i++){
cout<<temp[i]<<",";
}
}

int main(){
int arr[8];
for(int i = 0 ; i < 8 ; i++ ){
    cout<<"Enter the value for indx "<< i <<endl;
    cin>>arr[i];
}
SelectionSort(arr,8);
return 0;
}