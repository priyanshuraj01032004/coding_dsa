#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,1,5,3,6,4};
    int size = 6;

    int maxpro = 0;
    int min = 999999;

    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else{
            maxpro= max(maxpro , arr[i] - min);
        }
    }

    cout << maxpro;

    return 0;
}