#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arrk;
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int counter ;
    for(int i=0 ; i<size ; i++){
        counter = 0;
        for(int j=i ; j<size ;j++){
            if(arr[i]<arr[j]){
                break;
            }
            if(j == size-1){
                arrk.push_back(arr[i]);
            }
            
        }
        
    }

    for(int i=0 ; i<arrk.size();i++){
        cout << arrk[i] << " ";
    }
    return 0;
}