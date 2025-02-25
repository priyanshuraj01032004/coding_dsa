#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k=0,m;
    cout << "enter a number : ";
    cin >> n;
    m = n;
    while(n>9){
        int remainder = n%10;
        k = 10*k+remainder;
        n/=10;
    }
    k = k*10 + n;
    if(m == k)
         cout << "the number is palindrome";
    else
        cout <<"no the number is not palindrome";
    return 0;
}