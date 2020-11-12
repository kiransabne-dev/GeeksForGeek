#include <iostream>
#include <cstdlib>

using namespace std;


int minAdjDiffNew(int arr[], int n){
    int result = abs(arr[1] - arr[0]);
    for(int i = 1; i < n; i++){
        if(i != n - 1){
            int num = abs(arr[i+1] - arr[i]);
            result = min(result, num);
        } else {
            int num = abs(arr[i] - arr[n - 1 - i]);
            result = min(result, num);
        }
    }
    return result;
}

void minAdjDiff(int arr[], int n){
    int diff[n];
    int min;
    
    for(int i = 0; i < n; i++){
        if(i != n - 1){
            int num = arr[i+1] - arr[i];
            diff[i] = abs(num);
        } else {
            int num = arr[i]-arr[n - 1 -i];
            diff[i] = abs(num);
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", diff[i]);
    }
}

int main(){
    cout << "" << endl;
    int arr[] = {10, -3, -4, 7, 6, 5, -4, -1};
    int n = 8;
    int value = minAdjDiffNew(arr, n);
    printf("%d\n", value);
    return 0;
}