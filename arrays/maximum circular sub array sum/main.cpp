#include <iostream>

using namespace std;

int maxCircularSum(int arr[], int n){
    if(n==1){
        return arr[0];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("sum %d\n", sum);

    int currMax = arr[0], maxSoFar = arr[0], currMin = arr[0], minSoFar = arr[0];

    for(int i = 1; i < n; i++){
        printf("currMax %d and maxSoFar %d\n", currMax, maxSoFar);
        currMax = max(currMax + arr[i], arr[i]);
        maxSoFar = max(maxSoFar, currMax);
        printf(" after  currMax %d and maxSoFar %d\n", currMax, maxSoFar);

        // for  minimum
        printf("currMin %d and minSoFar %d\n", currMin, minSoFar);
        currMin = min(currMin + arr[i], arr[i]);
        minSoFar = min(minSoFar, currMin);
        printf(" after currMin %d and minSoFar %d\n", currMin, minSoFar);

    }

    if(minSoFar == sum){
        return maxSoFar;
    }

    return max(maxSoFar, sum - minSoFar);
}


int main(){
    cout << " " << endl;
    int arr[] = {8, -8, 9, -9, 10, -11, 12};
    int n = 7;
    int val = maxCircularSum(arr, n);
    printf("Val %d\n", val);
    return 0;
}