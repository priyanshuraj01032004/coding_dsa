#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,2,1,1,1,1,2,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_count = 0,count = 0;
    for(int i=0; i< size;i++){
        if(arr[i] == 1){
            count++;
            max_count = max(max_count,count);
        }
        else{
            count = 0;
        }
    }

    cout << "the maximum number of cosecutive 1's are "<< max_count;

    return 0;

}