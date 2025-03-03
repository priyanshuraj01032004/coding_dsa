#include <bits/stdc++.h>
using namespace std ;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k= 15;
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0,right =0 ,sum =0 ,max_len = 0;
    while(right < size){
        sum+=arr[right];
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum == k){
            max_len = max(max_len,right-left+1);
        }

        right++;

    }
    cout << max_len;
    return 0;
}