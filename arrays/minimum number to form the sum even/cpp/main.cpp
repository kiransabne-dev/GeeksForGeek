// Given an array arr[] of size N, the task is to add the minimum number(should be greater than 0) to the array so that the sum of the array becomes even

 

// Example 1:

// Input: N = 8
// arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
// Output:  2
// Explanation:  Sum of array is 36, so 
// we add minimum number 2 to make the 
// sum even.

#include <iostream>

using namespace std;

int minNum(int arr[], int n){
    int sum = 0;
	    for(int i = 0; i < n; i++){
	        sum += arr[i];
	    }
	    if(sum%2 == 0){
	        return 2;
	    } else {
	        return 1;
	    }
}

int main(){
    cout << "" << endl;
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int values = minNum(arr, n);
    printf("%d\n", values);
    return 0;
}