#include <bits/stdc++.h>
using namespace std ; 

int search_rotate(vector<int>& arr , int k){
    int size = arr.size();
    int low = 0 , high = size - 1 ;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid] == k){
            return mid;
        }
        //if left part is sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                high = mid - 1;
            }
            else{
                low  = mid + 1;
            }
        }
        //if right part is sorted
        else{
        if(arr[high] >= k && k >= arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        }
    }
    return -1;
}


int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 3;
    cout << search_rotate(arr,target);

    return 0;
}