#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {100, 200, 1, 3, 2, 4};
    int hash[500] = {0};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i < size ;i++){
        hash[arr[i]] += 1 ;
    }
    int count =0 ,max = 0;
    for(int i=0; i <500 ; i++){
        if(hash[i] !=0 ){
            count++;
        }
        if(max < count){
            max = count;
        }
        if(hash[i] == 0){
            count = 0;
        }
    }

    cout << max;
    return 0;
}