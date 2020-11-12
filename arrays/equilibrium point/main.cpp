#include <iostream>

using namespace std;

int equilibriumPoint(int arr[], int n){
    int sum = 0, leftsum = 0;
    for(int i = 0; i < n; ++i){
        sum += arr[i];
    }
    //printf("sum %d\n", sum);
    for(int i = 0; i < n; i++){
        sum -= arr[i];
        if(sum == leftsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}

int main(){
    cout << "" << endl;
    int arr[] = {1, 3, 5, 2, 2};
    int n = 5;
    int equilibriumIndex = equilibriumPoint(arr, n);
    printf("%d\n", equilibriumIndex);
    
    return 0;
}