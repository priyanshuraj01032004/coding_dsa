#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the number of rows :";
    cin >> n;
    int left_counter = 1;
    int right_counter = (n*2)-1;
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<n*2 ; j++){
            if(j>=left_counter && j<=right_counter-1){
                cout<< " ";
            }else{
                if(j<n){
                    cout<<j+1;
                }else{
                    cout<<n*2-j;
                }
            }
        }
        left_counter++;
        right_counter--;
        cout << "\n";
    }


    return 0;
}