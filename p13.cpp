#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the number of rows :";
    cin >> n;
    int counter = 1;
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<i ; j++){
            cout << counter << " ";
            counter++;
        }
        cout << "\n";
    }

    return 0;
}