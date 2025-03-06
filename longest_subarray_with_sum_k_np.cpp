#include <bits/stdc++.h>
using namespace std;



int longest_sub(int arr[],int size , int sum){
    int left = 0 , right = 0 , cur_sum = 0 , max_len = 0;
    while(right<size){
        sum += arr[right];
        if(cur_sum == sum){
            max_len = max(max_len,right-left+1);
        }
        else if(cur_sum>sum){
            right++;
        }
    }
}



int main(){



    return 0;
}