#include <bits/stdc++.h>
using namespace std;



int count_subarray(int arr[],int size , int sum){
    
    int right = 0 , left = 0 , cur_sum = 0 , track = 0;
    while(right<size){

        cur_sum +=arr[right];

        while(cur_sum>sum && left <= right){
            cur_sum-=arr[left];
            left++;
        }
        if(cur_sum==sum){
            track++;
            cur_sum = 0;
        


        }
        right++;
        
    }

    return track;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size =  sizeof(arr)/sizeof(arr[0]);
    cout << "the subarray count is " << count_subarray(arr,size,9);

    return 0;

}