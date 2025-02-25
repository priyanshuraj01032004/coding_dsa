#include <bits/stdc++.h>
using namespace std;

void left_rotate(int arr[],int size){
    int key = arr[0];
    int j=0;
    while(j<size-1){
        arr[j] = arr[j+1];
        j++;
    }
    arr[size-1] = key;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    left_rotate(arr,size);
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";

    return 0;
}