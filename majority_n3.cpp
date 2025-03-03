#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,2};
    int hash[1000] = {0};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i <size ; i++){
        hash[arr[i]] += 1;
    }

    for(int i=0 ; i<1000 ; i++){
        if(hash[i] > size/3){
            cout << i <<" ";
        }
    }
    return 0;
}