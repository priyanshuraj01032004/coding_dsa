#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,n1,m1,mid1,l1;
    cout<< "enter the number of rows :";
    cin >> n ;
    m = n*2;
    m1 = n*2-1;
    n1= n;
    int mid = m/2;
    mid1 =m1-1;
    int l = mid;
    l1 = 0;

    // m = n*2-1;
    // int mid = m-1;
    // int l=0;

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

    for(int i=0 ; i<n1 ; i++){
        for(int j=0;j<m1;j++){
            if((j>=l1 && j<=mid1)){
                // cout <<"("<<i<<","<<j<<")";
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        l1++;
        mid1--;
        
        cout<<"\n";
    }


    return 0;
}