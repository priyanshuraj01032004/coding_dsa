#include <bits/stdc++.h>
using namespace std;

int count_occurence(vector<int>& arr , int x){
    int size = arr.size();
    int low = 0 , high = size - 1, flag = -1 , count = 0;
    while(low <= high){
        int mid = (low + high) / 2 ;
        if(arr[mid] <= x){
            flag = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    int i = flag;
    while(arr[i] == x){
        count++;
        i--;
    }

    return count;

}


int main(){
    vector<int> arr = {1, 1, 2, 2, 2, 2, 2, 3};
    int x = 2;
    cout << count_occurence(arr,x);

    return 0;
}