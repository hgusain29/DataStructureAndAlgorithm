int Merge(int arr[], int low , int mid , int high){
int n1 = mid-low + 1 , n2 = high -mid ;
int left[n1],right[n2];
for(int i = 0 ; i < n1 ; i++){
    left[i] = arr[low+i];
}
for(int i = 0 ; i < n2 ; i++){
    right[i] = arr[mid+i];
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
while(i<n1){
    arr[k] = left[j];
    j++;k++; 
}
} 