#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low , int mid , int high){
int n1 = mid-low + 1 , n2 = high -mid ;
int left[n1],right[n2];
for(int i = 0 ; i < n1 ; i++){
    left[i] = arr[low+i];
}
for(int i = 0 ; i < n2 ; i++){
    right[i] = arr[mid+i+1];
}
int i = 0 , j = 0 , k =low;
while(i<n1 && j<n2){
    if(right[i]>=left[j]){
        arr[k] = left[j];
        k++;
        j++;
    }else{
        arr[k] = right[i];
        k++;
        i++;
    }
}
while(i<n1){
    arr[k] = right[i];
    i++;k++; 
}
while(j<n1){
    arr[k] = left[j];
    j++;k++; 
}

} 
void MergeSort(int arr[] , int l , int r ){
    if(r>l){
        int m = l+(r-l)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);

    }
}


int main(){
int arr[8] ;
for (int i = 0 ; i < 8 ; i++){
    cout<<"Enter the value for array indx "<<i<<endl;
    cin>>arr[i];
}
int l = 0 , r = 7 ;
MergeSort(arr , l , r );
for(int x : arr){
    cout<<x<<" ";
}


return 0;
}