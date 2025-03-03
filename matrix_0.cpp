#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4] = {
        {1, 2, 0, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    vector<int> arr_i;
    vector<int> arr_j;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(arr[i][j] == 0){
                arr_i.push_back(i);
                arr_j.push_back(j);
            }
        }
    }

    while(arr_i.size() != 0 || arr_j.size() != 0){
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<4 ; j++){
                if(i == arr_i[arr_i.size()-1] || j == arr_j[arr_j.size()-1]){
                    arr[i][j] = 0;
                }
    
            }
        }
        arr_i.pop_back();
        arr_j.pop_back();
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout << arr[i][j] << " ";
        }cout << "\n";
    }

    return 0;


}