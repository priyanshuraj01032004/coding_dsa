#include <bits/stdc++.h>
using namespace std;

int lower_bound(int arr[] , int size , int key){
    int low = 0 , high = size -1 ;
    int flag = size;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] >= key){
            flag = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
            // flag = mid;
        }
    }

    return flag;
}

int main(){
    int arr[] = {3,5,8,15,19};
    int size = sizeof(arr) / sizeof(arr[0]);

    int val = lower_bound(arr,size,9);
    cout << val;

    return 0;
}