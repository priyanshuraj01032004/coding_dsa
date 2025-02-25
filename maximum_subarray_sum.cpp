#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int cur_sum = 0;
    int max_sum = 0;

    for(int i=0 ; i<size ; i++){
        cur_sum += arr[i];
        if(cur_sum > max_sum){
            max_sum = cur_sum;
        }
        if(cur_sum < 0){
            cur_sum =0;
        }
    }

    cout << max_sum;

    return 0;

}