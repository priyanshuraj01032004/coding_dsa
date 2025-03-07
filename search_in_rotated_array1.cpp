#include <bits/stdc++.h>
using namespace std;

int search_rotated(vector<int>& arr, int k){
    int size  = arr.size();
    int low = 0 , high = size - 1 ;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == k){
            return true;
        }
        if(arr[low] == arr[mid] && arr[high] == arr[mid] ){
            low = low + 1;
            high = high - 1;
            continue;
        }
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        else{
            if(arr[high] >= k && k >= arr[mid]){
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
    }

    return false;
}

int main(){
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 13;
    bool result = search_rotated(arr,target);
    if(result){
        cout << "the element is present : ";
    }
    else{
        cout << "the element isn't present:";
    }

    return 0;
}