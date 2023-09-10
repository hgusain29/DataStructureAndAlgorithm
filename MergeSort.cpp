#include<bits/stdc++.h>
using namespace std;
void MergeSort(int a[] , int b[] , int n){
int i = 0 ;
int j = 0 ;
int k[8] , t;
while(i!=n-1&&j!=n-1){
    if(a[i]>b[j]){
        k[t] = b[j];
        t++;
        j++;
    }
     if(a[i]<b[j]){
        k[t] = a[i];
        t++;
        i++;
    }
}
while(i != n-1){
k[t] = a[i];
i++;
t++; 
}
while(j != n-1){
k[t] = a[i];
j++;
t++; 
}
cout<<"Sorted Array is : "<<endl;
for(int i = 0 ; i < 9 ; i++){
cout<<k[i]<<" ";

}
}

int main(){
int arr[5] ;
for (int i = 0 ; i < 5 ; i++){
    cout<<"Enter the value for array indx "<<i<<endl;
    cin>>arr[i];
}
int arr1[8] ;
for (int i = 0 ; i < 5 ; i++){
    cout<<"Enter the value for array1 indx "<<i<<endl;
    cin>>arr1[i];
}
MergeSort(arr,arr1,5);


return 0;
}