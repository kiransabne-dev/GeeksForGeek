// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

// Input:
// The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

// Output:
// For each testcase, in a new line, output the rotated array.

// Constraints:
// 1 <= T <= 200
// 1 <= N <= 107
// 1 <= D <= N
// 0 <= arr[i] <= 105

// Example:
// Input:
// 2
// 5 2
// 1 2 3 4 5 
// 10 3
// 2 4 6 8 10 12 14 16 18 20

// Output:
// 3 4 5 1 2
// 8 10 12 14 16 18 20 2 4 6
#include <iostream>

using namespace std;

void rotateArrayByDPlaces(int arr[], int n, int d){
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++){
        // printf("%d\n", i - d);
        arr[i - d] = arr[i];
    }

    for(int i = 0; i < d; i++){
        arr[n-d+i] = temp[i];
    }

    for(int z = 0; z < n; z++){
        printf("%d\n", arr[z]);
    }
}

int main(){
    cout << "" << endl;
    // int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // int n = 10, d = 3;
    // rotateArrayByDPlaces(arr, n, d);
    int testCases;
    cin >> testCases;
    while(testCases--){
        int n;
        int d;
        cin >> n;
        cin >> d;
        int arr[n];
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr[i] = temp;
        }
        rotateArrayByDPlaces(arr, n, d);

    }
    return 0;
}

// change it to below
// #include<bits/stdc++.h>
// using namespace std;

// long long a[10000000];

// void rotateArr(long long d, long long n){
    
//     reverse(a, a+d);
//     reverse(a+d, a+n);
//     reverse(a, a+n);
    
// }


// int main() {
// 	//code
	
// 	long long t;
// 	cin >> t;
	
// 	while(t--){
// 	    long long n, d;
// 	    cin >> n >> d;
	    
// 	    for(long long i = 0; i < n; i++){
// 	        cin >> a[i];
// 	    }
	    
// 	    rotateArr(d,n);
	    
// 	    for(long long i =0;i<n;i++){
// 	        cout << a[i] << " ";
// 	    }
// 	    cout << endl;
	    
// 	}
	
// 	return 0;
// }