#include <bits/stdc++.h>
using namespace std;

// void sort(int arr[],int size){

// }

int main(){
   int arr[] = {1,2,0,1,2,0,0};
   int size = sizeof(arr)/sizeof(arr[0]);

   int hash[3] = {0};
   for(int i=0 ; i<size ; i++){
    hash[arr[i]] +=1 ; 
   }
   int index = 0;
   for(int i = 0; i<3; i++){
    while (hash[i] > 0) {
      arr[index++] = i;  // Fill sorted values
      hash[i]--;
     }
   }

   for(int i=0;i<size;i++){
    cout << arr[i] << " " ;
   }
 }
