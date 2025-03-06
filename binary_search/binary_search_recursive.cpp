#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[] , int size , int key , int low , int high){
    int mid = (low + high)/2;

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        binary_search(arr,size,key,low,mid-1);
    }else{
        binary_search(arr,size,key,mid+1,high);
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int val = binary_search(arr,size,5,0,size-1);
    cout << "the index is " << val;

    return 0;
}