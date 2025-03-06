#include <bits/stdc++.h>
using namespace std;

void print_matrix(int arr[][4] , int rows , int columns){
    int left = 0 , right = columns-1 , top = 0 , bottom = rows - 1;
    while(top <= bottom && left <=right){
        for(int i=left ; i <= right ;i++){
            cout << arr[top][i] << " " ;
        }
        top++;
        for(int i=top ; i <= bottom ; i++){
            cout << arr[i][right] << " ";
        }
        right--;

        for(int i=right ; i>=left ; i--){
            cout << arr[bottom][i] << " " ;
        }
        bottom--;

        for(int i=bottom ; i>=top ; i--){
            cout << arr[i][left] << " " ;
        }
        left++;
        // for(int i=0 ; i<)
    }
}
int main(){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6 ,7 ,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int size = sizeof(arr) / sizeof(arr[0][0]);
    print_matrix(arr,4,4);
    return 0;
}