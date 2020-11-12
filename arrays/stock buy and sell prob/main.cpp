#include <iostream>

using namespace std;

int maxProfit(int arr[], int n){
    int profit = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            profit += arr[i] - arr[i-1];
        }
    }
    return profit;
}

int main(){
    cout << "hello" << endl;
    int arr[] = {1, 5, 3, 8, 12};
    int n = 5;
    int res = maxProfit(arr, n);
    printf("%d\n", res);
    return 0;
}