#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){

for(int i = 0 ; i < n ; i++ ){
int min = i ;
    for(int j = i+1 ; j < n ; j++){
        if(arr[min]>arr[j]){
            min = j ;
        }
    }
    swap(arr[min],arr[i]);
}
for(int i = 0 ; i < n ; i++){
cout<<arr[i];
if(i!=n-1){
    cout<<",";
}
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