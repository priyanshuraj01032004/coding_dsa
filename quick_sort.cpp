#include <bits/stdc++.h>
using namespace std;


int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j=low ; j<high ; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
    
}

void quick_sort(int arr[],int low,int high){
    if(low<high){
        int part = partition(arr,low,high);

        quick_sort(arr,low,part-1);
        quick_sort(arr,part+1,high);
    }
}


int main(){
    int arr[] = {17,6,4,3,5};
    int size = sizeof(arr)/ sizeof(arr[0]);

    quick_sort(arr,0,size-1);


    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }

    
    
    
}