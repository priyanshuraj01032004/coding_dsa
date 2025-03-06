#include <bits/stdc++.h>
using namespace std;

void binary_search(int arr[],int size , int key){
    int mid = size/2, left = 0 , right = size-1,flag = 1,c=size;
    while(c>1){
        if(mid == key){
            cout << "found";
            flag = 0;
            break;
        }
        else if(mid > key){
            right = mid;
        }
        else{
            left = mid+1;
        }
        mid = (left+right)/2;
        c--;

    }
    if(flag==1){
        cout<<"not found";
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    binary_search(arr,size,17);
    return 0;
}