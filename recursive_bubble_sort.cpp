#include <bits/stdc++.h>
using namespace std;

void recursive_sort(int arr[],int size , int i,int j){
    if(i==size-1){
        return ;
    }
    if(j == size-i-1){
        recursive_sort(arr,size,i+1,0);
        return;
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }

    recursive_sort(arr,size,i,j+1);

}




int main(){
    int arr[] = {12,12,11,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // for(int i=0;i<size;i++){
    //     for(int j=0;j<size-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

    recursive_sort(arr,size,0,0);


    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}