#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<< "enter the number of rows :";
    cin >> n ;
    m = n*2-1;
    int mid = m-1;
    int l=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<m;j++){
            if((j>=l && j<=mid)){
                // cout <<"("<<i<<","<<j<<")";
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        l++;
        mid--;
        
        cout<<"\n";
    }

    return 0;
}