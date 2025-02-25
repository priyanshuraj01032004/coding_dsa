#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,hcf=1;
    cout << "enter two numbers: ";
    cin >> num1 >> num2;

    if(num1<num2){
        for(int i=1 ; i<=num1 ; i++){
            if(num1%i==0 && num2%i==0){
                hcf = i;
            }
        }
    }
    else if(num1>num2){
        for(int i=1 ; i<=num2 ; i++){
            if(num1%i==0 && num2%i==0){
                hcf = i;
            }
        }
    }
    else{
        hcf = num1;
    }

    cout << "the highest common factor of both numbers is : " << hcf;
    
    return 0;
}