#include <bits/stdc++.h>
using namespace std;

void left_rotate_by_d(int arr[],int size,int d){
    int k = d;
    while(k<6){
        int key = arr[0];
        int j = 0;
        while(j<size-1){
            arr[j] = arr[j+1];
            j++; 
        }
        arr[size-1] = key;
        k++;
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    left_rotate_by_d(arr,size,d);
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";


    return 0;
}