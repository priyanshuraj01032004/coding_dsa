#include <bits/stdc++.h>
using namespace std;



void largest_element(int arr[],int &size, int &max , int &index){
    max = 0;
    for(int i=0;i<size;i++){
        // if(arr[i]>max){
        //     max = arr[i];
        //     index = i;
        // }
        arr[i]>max ? max = arr[i] ,index = i:max =  max ;
    }

    
}


int main(){
    int arr[] = {10,11,13,15,13,24,11,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index,max;
    largest_element(arr,size,max,index);
    cout << "the maximum element is " << max <<" with index " << index;

    return 0;
}

