#include <iostream>
#include <algorithm>

using namespace std;

int mean(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int median(int arr[], int n){
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    if(n % 2 == 0){
        return (arr[n/2 - 1] + arr[n/2])/2;
    } else {
        return arr[n/2];
    }
}

int main(){
    int arr[] = {1, 2, 19, 28, 5};
    int n = 5;
    //int values = mean(arr, n);
    //printf("mean %d\n", values);
    int values = median(arr, n);
    printf("median %d\n", values);
    return 0;
}