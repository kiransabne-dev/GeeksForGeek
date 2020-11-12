#include <iostream>
#include <cmath>
using namespace std;

void frequencies(int arr[], int n){
    int i = 0;
    while(i < n){
        // check if element is negative or 0
        if(arr[i] <= 0){
            i++;
            continue;
        }

        int elementIndex = arr[i] - 1;

        if(arr[elementIndex] > 0){
            arr[i] = arr[elementIndex];
            arr[elementIndex] = -1;
        } else {
            arr[elementIndex]--;
            arr[i] = 0;
            i++;

        }
    }
    //print
    for(int i = 0; i < n; i++){
        arr[i] = abs(arr[i]);
        printf("%d\n", arr[i]);
    }
    
}

int main(){
    cout << "" << endl;
    int arr[] = {2, 3, 3, 2, 5};
    int n = 5;
    //0 2 2 0 1
    frequencies(arr, n);
    return 0;
}