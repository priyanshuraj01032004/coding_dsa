#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int size , int key){
    int low = 0 , high = size - 1 ;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    
    }

    return -1;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int val = binary_search(arr,size,7);
    if(val != -1){
        cout << "the index is " << val;
    }else{
        cout << "not found";
    }
    return 0;
}