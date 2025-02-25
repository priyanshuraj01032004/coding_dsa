#include <bits/stdc++.h>
using namespace std;

void check_pair(int arr[],int size,int target){
    int k=0;
    for(int i=0 ; i<size ; i++){
        for(int j=0; j<size; j++){
            if(i!=j && arr[i]+arr[j] == target){
                cout << i << " , " << j;
                k = 1;
                break;
            }
        }
        if(k==1){
            break;
        }
    }
    if(k==0){
        cout << "-1 , -1";
    }
}



int main(){

    int arr[] = {2,6,5,8,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "enter the target : ";
    cin >> target;

    check_pair(arr,size,target);

    return 0;
}