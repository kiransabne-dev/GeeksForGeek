#include <iostream>

using namespace std;

int checkIfSorted(int arr[], int n){
    if(n > 1){
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            return -1;
        }
    }
    }
    return 1;
}

int main(){
    cout << "hello" << endl;
    int arr[] = {10,20,30,40};
    int value = checkIfSorted(arr, 4);
    printf("%d\n", value);
    return 0;
}