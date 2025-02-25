#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,3,2,4,4};
    int size = 7;

    int hash[10] = {0};
    for(int i = 0 ;i<size;i++){
        hash[arr[i]]+=1;
    }

    for(int i=0;i<10;i++){
        if(hash[i] == 1){
            cout << i << endl;
        }
    }

    return 0;
}