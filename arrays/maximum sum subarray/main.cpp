#include <iostream>

using namespace std;

int maxSumSubarray(int arr[], int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1; i < n; i++){
        maxEnding = max(maxEnding+arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main(){
    cout << "" << endl;
    int arr[] = {-3, 8, -2, 4, -5, 6};
    int n = 6;
    int values = maxSumSubarray(arr, n);
    printf("res -> %d\n", values);

    return 0;
}