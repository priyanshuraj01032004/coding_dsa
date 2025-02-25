#include <bits/stdc++.h>
using namespace std;

void second_largest(int arr[],int size , int &value , int &index){
    int max = 0,in;
    for(int i=0; i<size ; i++){
        arr[i]>max ? max = arr[i],in = i:max = max ;
    }

    value = 0;
    for(int i=0; i<size;i++){
        if(i == in){
            continue;
        }
        else{
            arr[i]>value ? value = arr[i] , index = i : value = value; 
        }
    }

}

int main(){
    int arr[] = {12,13,14,15,21,31,32,1,89,31};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index, value;
    second_largest(arr,size,value,index);

    cout << "the second largest element is " << value << "at index " <<index <<endl;
    return 0;
}