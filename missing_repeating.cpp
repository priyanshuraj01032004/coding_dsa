#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,4,3,6,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int hash[1000] = {0};

    

    for(int i=0; i <size ; i++){
        hash[arr[i]] += 1;
    }
    int max = 0;
    for(int i=0; i <size ; i++){
        if(arr[i]>max)
            max = arr[i];
    }


    for(int i=0 ; i<1000 ; i++){
        if(hash[i] == 2){
            cout << "A = "<< i <<"\n";
        }
        if(hash[i] == 0 && i<max && i!= 0){
            cout <<"B = " << i;
        }
    }
    return 0;
}