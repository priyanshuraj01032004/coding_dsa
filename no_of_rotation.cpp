#include <bits/stdc++.h>
using namespace std;

int minimum_element(vector<int>& arr){
    int size = arr.size();
    int low = 0 ,high = size - 1;
    int ans = 9999;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[high] > arr[high+1]){
            return high;
        }
        if(arr[low] <= arr[high]){
            
        }

    }
    
}


int main(){
    vector<int> arr = {3,4,5,1,2};
    cout << minimum_element(arr);

    return 0;
}