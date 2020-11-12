#include <iostream>

using namespace std;

int maxSumArray(int arr[], int n, int k){
    int currSum = 0;
    for(int i = 0; i < k; i++){
        currSum += arr[i];
    }
    int maxSum = currSum;
    for (int i = k; i < n; i++)
    {
        /* code */
        currSum += (arr[i] - arr[i-k]);
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}

int main(){
    cout << "hello" << endl;
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6, k = 3;
    int value = maxSumArray(arr, n, k);
    printf("value -> %d\n", value);
    return 0;
}