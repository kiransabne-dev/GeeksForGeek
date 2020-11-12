#include <iostream>

using namespace std;

int missingNumber(int arr[], int n){
    int flags[n+1] = {0};

    for(int i = 0; i < n; i++){
        if(arr[i] > 0 && arr[i] <= n){
            flags[arr[i]] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        if(flags[i] != 1){
            return i;
        }
    }
    return n+1;
}

int main(){
    cout << "" << endl;
    int arr[] = {1, 3, 4, 5};
    int n = 4;
    int values = missingNumber(arr, n);
    printf("%d\n", values);
    return 0;
}