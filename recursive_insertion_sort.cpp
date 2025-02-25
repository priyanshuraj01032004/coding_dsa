#include<bits/stdc++.h>
using namespace std;

void recursive_insertion_sort(int arr[],int size, int i,int j){
    if(i==size){
        return;
    }

    if(j<0 || arr[j]<=arr[j+1]){
        recursive_insertion_sort(arr,size,i+1,i);
        return;
    }

    swap(arr[j],arr[j+1]);
    recursive_insertion_sort(arr,size,i,j-1);

    
}

int main(){
    int arr[] = {12,11,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // for(int i=1 ; i<size ; i++){
    //     int key = arr[i];
    //     int j = i-1;
    //     while(j>=0 && arr[j]>key){
    //         arr[j+1] = arr[j];
    //         j--;
    //     }
    //     arr[j+1] = key;
    // }
    recursive_insertion_sort(arr,size,1,0);
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }

}