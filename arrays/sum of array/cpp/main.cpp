#include <iostream>

using namespace std;

int sum(int arr[], int n) {
	    // code here
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	        sum += arr[i];
	    }
	    return sum;
}

int main(){
    int arr[] = {1,2,3,4};
    int n= 4;
    int val = sum(arr, n);
    printf("val %d\n", sum);
    return 0;
}