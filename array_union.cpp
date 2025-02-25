#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr1[] = {1,3,2,4,5},arr2[] = {3,4,7,8,9};
    int s1 = 5;
    int s2 = 5;
    // for(int i=0;i<s1;i++){
    //     for(int j=i ; j<s1-1;j++){
    //         if(arr1[j]>arr1[j+1]){
    //             swap(arr1[j],arr1[j+1]);
    //         }
    //         if(arr2[j]>arr2[j+1]){
    //             swap(arr2[j],arr2[j+1]);
    //         }
    //     }
    // }
    // cout<< "bol na halke halke";
    int hash[10] = {0};
    for (int i = 0; i < s1; i++) {
        hash[arr1[i]] += 1;
    }
    for (int i = 0; i < s2; i++) {
        hash[arr2[i]] += 1;
    }
    int size = 0;
    for(int i=0 ; i<10 ;i++){
        if(hash[i]>0){
            size++;
        }
    }
    int f_arr[size];
    int k=0;
    for(int i=0;i<10;i++){
        if(hash[i]>0){
            f_arr[k] = i;
            k++;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << f_arr[i] << " ";
    }



}