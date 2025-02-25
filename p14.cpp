#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the number of rows and column :";
    cin >> n;
    n = n+ 65;

    for(int i = 65; i<=n ; i++){
        for(int j=65; j<i ; j++){
            cout << char(j);
        }cout << "\n";
    }

    return 0;
}