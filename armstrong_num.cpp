#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout << "enter a number: ";
    cin >> n;
    m = n;
    int n1 = n,digit_count = 0;
    int sum = 0;
    int temp;
    while(n1>10){
        digit_count++;
        n1 = n1/10;
    }
    digit_count++;
    // cout<<digit_count;


    while(n>10){
        int remainder = n%10;
        temp = 1;
        for(int i=0;i<digit_count;i++){
            temp = remainder*temp;
        }
        sum +=temp;
        n=n/10;
    }
    temp =1 ;
    for(int i=0;i<digit_count;i++){
        temp = n*temp;
    }
    sum+=temp;
    // cout<<sum;

    if(sum == m)
        cout << "the number is armstrong";
    else
        cout << "no the number isn't armstrong";
   

    return 0;
}