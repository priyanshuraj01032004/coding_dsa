#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,-1,-2,-3};
    int size = arr.size();

    vector<int> n_arr;
    vector<int> p_arr; 

    for(int i=0 ; i<size ; i++){
        if(arr[i]<0){
            n_arr.push_back(arr[i]);
        }
        else{
            p_arr.push_back(arr[i]);
        }
    }

    vector<int> f_arr(size);
    int c1=0,c2=0;
    for(int i=0 ; i<size ; i++){
        if(i%2 == 0){
            f_arr[i] = p_arr[c1++];
            
        }
        else{
            f_arr[i] = n_arr[c2++];
            
        }
    }


    for(int i=0 ; i<size ; i++){
        cout << f_arr[i] << " ";
    }
    return 0 ;
}