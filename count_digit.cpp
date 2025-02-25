#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    int count = 0;
    while(n>9){
        n = n/10;
        count++;
    }
    count++;
    cout<<"total number of digits are :" << count;


    return 0;
}