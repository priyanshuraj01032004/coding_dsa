#include <bits/stdc++.h>
using namespace std;

void check(int arr[],int size,int &counter){
    counter = 0;
    for(int i = 0 ; i < size-1; i++){
        if (arr[i] > arr[i + 1]) {
            counter = 1;
            break;
        } else {
            counter = 0;
        }
         
    }
}


int main(){
    int arr[] = {1,2,3,4};
    int counter;
    int size = sizeof(arr) / sizeof(arr[0]);
    check(arr,size,counter);
    counter > 0 ? cout << "not sorted array " : cout << "already sorted array ";

    return 0;
}