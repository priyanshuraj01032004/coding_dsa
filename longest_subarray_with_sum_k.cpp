#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 1, 1, 2, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int hash[100] = {0};  // Hash array to store the frequency of numbers

    // Store the frequency of each number in hash
    for(int i = 0; i < size; i++){
        hash[arr[i]] += 1;
    }

    int k;
    cout << "Enter k value: ";
    cin >> k;

    int sum = 0, maxLength = 0;

    // Iterate through hash array to find the longest subset
    for(int i = 0; i < 100; i++){
        while(hash[i] > 0 && sum + i <= k) {
            sum += i;      // Add the current number to sum
            hash[i]--;     // Reduce the frequency of the number
            maxLength++;   // Increase the count of elements in subset
        }
        if(sum == k) break;  // Stop if sum becomes equal to k
    }

    if(sum == k) 
        cout << "Longest subset length with sum " << k << " is: " << maxLength << endl;
    else
        cout << "No subset found with sum " << k << endl;

    return 0;
}
