#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(int arr[],int &size){
    for(int i=0 ; i<size-1 ; i++){
        for(int j=1 ; j<size ; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k<size;k++){
                    arr[k] = arr[k+1];
                }
                size--;
            }else{
                j++;
            }
        }
    }
}

int main(){
    int arr[] = {1,1,2,3,4,5,5,5,5,3};
    int size  = sizeof(arr) / sizeof(arr[0]);

    remove_duplicate(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}