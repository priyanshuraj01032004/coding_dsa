#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,1,2,2,2,2};
    int size = sizeof(arr) /sizeof(arr[0]);

    int hash[100]={0};

    for(int i=0 ; i<size ; i++){
        hash[arr[i]] += 1;

    }
    int k = 0;
    for(int i=0 ; i < 100; i++){
        if(hash[i] > size/2){
            cout << i;
            k=1;
            break;
        }
        // if(k==1){
        //     break;
        // }
    }
}