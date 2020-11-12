#include <iostream>

using namespace std;

void maximumAdjecent(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        // if (arr[i] > arr[i+1]){
        //     if(i == 0){
        //         printf("%d", arr[i]);
        //     } else {
        //         printf(" %d", arr[i]);
        //     }
            
        // } else {
        //     printf(" %d", arr[i+1]);
        // }
        printf("%d ", max(arr[i], arr[i+1]));
    }
}

int main(){
    cout << "" << endl;
    int arr[] = {5, 5};
    int n = 2;
    maximumAdjecent(arr, n);
    return 0;
}