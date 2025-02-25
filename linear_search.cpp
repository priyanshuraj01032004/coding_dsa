#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[],int size, int &index,int key){
    for(int i=0 ; i<size ;i++){
        if(arr[i]==key){
            index = i;
            // break;
        }
    }
}

int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;
    linear_search(arr,size,index,5);
    cout << index;

    return 0;
}