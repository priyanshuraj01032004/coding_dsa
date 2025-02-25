#include <bits/stdc++.h>
using namespace std;

// void move_zero(int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             int j = size - i;
//             int k=i;
//             while(k<j){
//                 arr[k] = arr[k+1];
//                 k++;
//             }
//             arr[size-1] = 0;
            
            
//         }
//     }
// }

void move_zero(int arr[],int size){
    int count = 0;
    for(int i=0 ; i<size ; i++){
        if(arr[i]!=0){
            arr[count++] = arr[i] ;
        } 
    }
    while(count<size){
        arr[count++] =0;
    }
    
}

int main(){
    int arr[] = {1,2,0,2,0,3,0,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    move_zero(arr,size);
    
    for(int i=0 ; i<size ;i++)
        cout << arr[i] << " ";


    return 0;
}