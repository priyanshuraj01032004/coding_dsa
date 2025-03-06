#include <bits/stdc++.h>
using namespace std;

int longest_sub(vector<int>& arr , int k){
    int left = 0 , right = 0, max_length = 0 , sum = 0;
    int size = arr.size();
    while(right < size){
        //expand
        sum+=arr[right];

        while(sum>k){
            //shrink
            sum-=arr[left];
            left++;
        }

        if(sum == k){
            max_length = max(max_length,right-left+1);
        }

        right++;
    }

    return max_length;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, -6, -9 , 7, 8, 10};
    int k = 0;
    cout << longest_sub(arr,k);

    return 0 ;
}