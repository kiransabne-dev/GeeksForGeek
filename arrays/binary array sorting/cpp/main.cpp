// Given a binary array A[] of size N. The task is to arrange the array in increasing order.
// Note: The binary array contains only 0  and 1.

// Example 1:

// Input:
// 5
// 1 0 1 1 0

// Output:
// 0 0 1 1 1

// Explanation:
// After arranging the elements in
// increasing order, elements will be as 0 0 1 1 1.
// Example 2:

// Input:
// 10
// 1 0 1 1 1 1 1 0 0 0

// Output:
// 0 0 0 0 1 1 1 1 1 1

// Explanation:
// After arranging the elements in
// increasing orde, elements will be
// 0 0 0 0 1 1 1 1 1 1.
#include <iostream>
using namespace std;

void binSort(int arr[], int n){
    int x = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 1){
            swap(arr[i], arr[x]);
            x++;
        }
    }

    //print element
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int testCases;
    cin >> testCases;
    cout << testCases << endl;
    while(testCases--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr[i] = temp;
        }
        binSort(arr, n);
        
    }
    return 0;
}