#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k=0;
    cout << "enter a number : ";
    cin >> n;
    while(n>9){
        int remainder = n%10;
        k = 10*k+remainder;
        n/=10;
    }
    k = k*10 + n;

    cout << "the reversed number is : "<< k;

    return 0;
}