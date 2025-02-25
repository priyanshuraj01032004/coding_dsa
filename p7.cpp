#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<< "enter the number of rows :";
    cin >> n ;
    m = n*2;
    int mid = m/2;
    int l = mid;
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<m;j++){
            if((j>=mid-1 && j<l)){
                // cout <<"("<<i<<","<<j<<")";
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        mid--;
        l++;
        cout<<"\n";
    }

    return 0;
}