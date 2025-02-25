#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<< "enter the number of rows and column :";
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            i >= j ? cout << "*" : cout << " ";
        }
        cout << "\n";
    }

    return 0;
}