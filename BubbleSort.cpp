 #include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[8]){
for(int i = 0 ; i < 7 ; i ++){
    for(int j = 0 ; j < 7-i ; j++ ){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
for(int i = 0 ; i < 7 ; i++){
    cout<<arr[i]<<",";
}
}
int main(){
int arr[8] ;
for (int i = 0 ; i < 8 ; i++){
    cout<<"Enter the value for array indx "<<i<<endl;
    cin>>arr[i];
}
BubbleSort(arr);


return 0;
}