#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,n1;
   cout << "enter the number of rows :";
   cin >> n;
   n1 = n;


   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        // if(j<=i){
            cout<<"*";
        // }
    }cout<< "\n";
   }



   for(int i=0;i<n1-1;i++){
    for(int j=0;j<n1-i-1;j++){
            cout<<"*";
        
    }cout<< "\n";
   }

    return 0;
}